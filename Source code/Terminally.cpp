//the beginning of the program
#include <iostream>  //for some basic stuff
#include <string>    //for some basic functions like substr()
#include <fstream>   //for opening and etiting files
#include <dirent.h>  //for the ls command
#include <map>       //for the map of acronyms
#include <cstring>   //for converting from a string to an int or a float
#include <algorithm> //for for_each
#include <ctime>     //for the time commands
#include <unistd.h>  //for system stuff
#include <windows.h> //for system stuff too
//adding the WinMM.lib to the program to play music
#pragma comment(lib,"Winmm.lib")
using namespace std;
//defining that the clscrn() function should run on windows
#define WINDOWS 1
//making a command that clears the console screen
void clscrn() {
    #ifdef WINDOWS
    system("cls");
    #endif
    #ifdef LINUX
    system("clear");
    #endif
}
//making a function that converts numbers from 0 to 16 into hexadecimal values
string conv(int x,string var){
    if (x == 0)
        var = "0";
    if (x == 1)
        var = "1";
    if (x == 2)
        var = "2";
    if (x == 3)
        var = "3";
    if (x == 4)
        var = "4";
    if (x == 5)
        var = "5";
    if (x == 6)
        var = "6";
    if (x == 7)
        var = "7";
    if (x == 8)
        var = "8";
    if (x == 9)
        var = "9";
    if (x == 10)
        var = "A";
    if (x == 11)
        var = "B";
    if (x == 12)
        var = "C";
    if (x == 13)
        var = "D";
    if (x == 14)
        var = "E";
    if (x == 15)
        var = "F";
    cout << var;
    return var;
}
//making the law of converting rgb to hex
//I spent some time on the internet until I made this law
string rgbToHex(float r,float g,float b){
    cout << "#";
    string r1,g1,b1,r2,g2,b2;
    float red,green,blue;
    red = r/16;
    green = g/16;
    blue = b/16;
    int hexR1 = red;
    int hexG1 = green;
    int hexB1 = blue;
    float Fred = red - hexR1;
    float Fgreen = green - hexG1;
    float Fblue = blue - hexB1;
    int hexR2 = (Fred * 16);
    int hexG2 = (Fgreen * 16);
    int hexB2 = (Fblue * 16);
    conv(hexR1,r1);
    conv(hexR2,r2);
    conv(hexG1,g1);
    conv(hexG2,g2);
    conv(hexB1,b1);
    conv(hexB2,b2);
    return "0";

}
//the main function
int main()
{
    //system info
    SYSTEM_INFO sysinfo;
    GetSystemInfo(&sysinfo);
    //colors variables
    string Color_Off="\033[0m";
    string Black="\033[1;30m";      
    string Red="\033[1;31m";      
    string Green="\033[1;32m";      
    string Yellow="\033[1;33m";     
    string Blue="\033[1;34m";      
    string Purple="\033[1;35m";      
    string Cyan="\033[1;36m";      
    string White="\033[1;37m";      
    //acronyms map
    map<string,string> Acronyms = {
        {"HTML","HyperText Markup Language"},
        {"LOL","Laughing out loud"},
        {"ASAP","As Soon As Possible"},
        {"RN","Right Now"},
        {"TBH","To Be Honest"},
        {"TY","Thank You"},
        {"IDC","I Don't Care"},
        {"IDK","I Don't Know"},
        {"IRL","In Real Life"},
        {"VR","Virtual Reality"},
        {"AR","Augmented Reality"},
        {"CD","Compact Disk"},
        {"HDD","Hard Disk Drive"},
        {"FYP","For You Page"},
        {"FB","Facebook"},
        {"YT","YouTube"},
        {"JS","JavaScript"},
        {"TK","Tkinter"},
        {"PLZ","Please"},
        {"THX","Thanks"},
        {"PS","PlayStation"},
        {"BTW","By The Way"},
        {"2020","Ah shit,here we go again."},
        {"CREDITS","Made with \033[0;31mLove\033[0m & \033[0;33mPassion\033[0m in Egypt by \033[0;36mAhmed Amr\033[0m."},
        {"CSS","Cascading Style Sheets"},
        {"IP","Internet Protocol"},
        {"GUI","Graphical user interface"},
        {"CLI","Command-line interface"},
        {"API","Application Programming Interface"},
        {"Q&A","Question And Answer"},
        {"VIP","Very Important Person"},
        {"3D","3-Dimensional"},
        {"2D","2-Dimensional"},
        {"AI","Artificial Intelligence"},
        {"ID","Identification"},
        {"IQ","Intelligence Quotient"},
        {"RSVP","Répondez S'il Vous Plaît"},
        {"AKA","Also Known As"},
        {"DIY","Do It Yourself"},
        {"TGIF","Thank God It's Friday"},
        {"RIP","Rest In Peace"},
        {"BYOB","Bring Your Own Beer"},
        {"KIT","Keep In Touch"},
        {"POV","Point Of View"},
        {"A.D","Anno Domini"},
        {"B.C","Before Christ"},
        {"FYI","For Your Information"},
        {"TBA","To Be Announced"},
        {"TBD","To Be Determined"},
        {"EOB","End Of Business"},
        {"YTD","Year-To-Date"},
        {"ROI","Return On Investment"},
        {"OT","Overtime"},
        {"HR","Human Resources"},
        {"CEO","Chief Executive Officer"},
        {"CFO","Chief Financial Officer"},
        {"VP","Vice President"},
        {"LMAO","Laughing My Ass Off"},
        {"LMFAO","Laughing My Fucking Ass Off"},
        {"OMG","Oh My God"},
        {"WTF","What The Fuck"},
        {"NSFW","Not Safe For Work"},
        {"IMHO","In My Honest Opinion"},
        {"BRB","Be Right Back"},
        {"TTYL","Talk To You Later"},
        {"TMI","Too Much Information"},
        {"ATM","At The Moment"},
        {"BFF","Best Friends Forever"},
        {"PC","Personal Computer"},
        {"USB","Universal Serial Bus"},
        {"OS","Operating System"},
        {"URL","Uniform Resource Locator"},
        {"TV","Television"},
        {"WWW","World Wide Web"},
        {"AC","Air Conditioner"},
        {"AD","Advertisement"},
        {"ATM","Automated Teller Machine"},
        {"DVD","Digital Versatile Disk"},
        {"UPC","Universal Product Code"},
        {"CPR","Cardiopulmonary resuscitation"},
        {"US","United States"},
        {"USA","United States Of America"},
        {"UK","United Kingdom"},
        {"EU","European Union"},
        {"UN","United Nations"},
        {"FBI","Federal Bureau Of Investigation"},
        {"CIA","Central Intelligence Agency"},
        {"KGB","Komitet Gosudarstvennoy Bezopasnosti"},
        {"NASA","National Aeronautics and Space Administration"},
        {"DMV","Department of Motor Vehicles"},
        {"WWI","World War One"},
        {"WWII","World War Two"},
        {"POW","Prisoner Of War"},
        {"HQ","Headquarters"},
        {"ETA","Estimated Time Of Arrival"},
        {"MIA","Missing In Action"},
        {"DOA","Dead On Arrival"},
        {"PETA","People For The Ethical Treatment Of Animals"},
        {"NRA","National Rifle Association"},
        {"GOP","The Grand Old Party"},
        {"IBM","International Business Machines"},
        {"UPS","United Parcel Service"},
        {"BMW","Bayerische Motoren Werke"},
        {"HBO","Home Box Office "},
        {"MTV","Music Television"},
        {"ESPN","Entertainment And Sports Programming Network"},
        {"BBC","British Broadcasting Corporation"},
        {"NBA","National Basketball Association"},
        {"NFL","National Football League"},
        {"MLB","Major League Baseball"},
        {"UFC","Ultimate Fighting Challenge"},
        {"JFK","John F. Kennedy"},
        {"MJ","Michael Jackson"},
        {"DJ","Disc Jockey"},
        {"QR","Quick Response"},
        {"DSL","Digital Subscriber Line"},
        {"WPA","Wi-Fi Protected Access"},
        {"WPS","Wi-Fi Protected Setup"},
        {"AFK","Away From Keyboard"},
        {"SMH","Shaking My Head"},
        {"ASMR","Autonomous Sensory Meridian Response"},
        {"DNS","Domain Name System"},
        {"WI-FI","Wireless Fidelity"},
        {"WIFI","Wireless Fidelity"},
        {"LAN","Local Area Network"},
        {"WLAN"," Wireless Local Area Network"},
        {"CAPTCHA","Completely Automated Public Turing Test To Tell Computers And Humans Apart"},
        {"TOR","The Onion Router"},
        {"CPU","Central Processing Unit"},
        {"GPU","Graphics Processing Unit"},
        {"EULA","End-User License Agreement"},
        {"RAM","Random Access Memory"},
        {"GIMP","GNU Image Manipulation Program"},
        {"JSON","JavaScript Object Notation"},
        {"XML","Extensible Markup Language "},
        {"SASS","Syntactically Swesome Style Sheets"},
        {"PNG","Portable Network Graphics"},
        {"JPEG","Joint Photographic Experts Group"},
        {"JPG","Joint Photographic Group"},
        {"TIFF","Tagged Image File Formt"},
        {"XCF","eXperimental Computing Facility"},
        {"IMO","In My Opinion"},
        {"IMHO","In My Humble Opinion"},
        {"MP3","MPEG Audio Layer III"},
        {"MP4","MPEG-4 Part-14"},
        {"VM","Virtual Machine"},
        {"ISO","International Organization for Standardization"},
        {"MPEG","Moving Picture Expertss Group"},
        {"USD","United States Dollar"},
        {"EUR","European Monetary Unit"},
        {"EGP","Egyptian Pound"},
        {"FAQ","Frequently Asked Questions"},
        {"IDGAF","I Don't Give A Fuck"},
        {"SSD","Solid-State Drive"}
    };
    //clears the console
    clscrn();
    //defining option
    string option;
    //getting the original working directory
    char cwd[256];
    if (getcwd(cwd,sizeof(cwd)) != NULL){
    }
    //opening a wav file
    mciSendString("open click.wav type waveaudio alias song",NULL,0,NULL);
    //making an infinite loop
    while (true){
        //getting the username and machine name from data.dat file
        fstream Data,song;
        string cWd = cwd;
        string CWD = cWd +"\\";
        string DATA = CWD + "Data.dat";
        string SONG = CWD + "audio.prop";
        char dat[40];
        char wav[11];
        strcpy(dat,DATA.c_str());
        Data.open(dat,ios::in);
        string data;
        getline(Data,data);
        //splitting the username and the machine name
        string username = data.substr(0,data.find(":"));
        int pos = username.length() + 1;
        string machine = data.substr(pos);
        Data.close();
        //checking if the click sound should be played or not
        strcpy(wav,SONG.c_str());
        song.open(wav,ios::in);
        string aud;
        getline(song,aud);
        if (aud == "play"){
            //playing the wav file when pressing [ENTER]
            mciSendString("play song from 0",NULL,0,NULL);
        }
        if (aud == "mute")
            mciSendString("pause song",NULL,0,NULL);
        song.close();
        //getting the current working directory whenever the loop begins
        char loopcwd[256];
        if (getcwd(loopcwd,sizeof(loopcwd)) != NULL){
        }
        //defining the "[ username@machine ]cwd~$" prefix
        string PS = Green + "[ " + username + "@" + machine + " ]" + Yellow + cWd + Blue + "~" + Color_Off + "$ ";
        cout << PS;
        //getting input from the user
        getline(cin,option);
        //clear screen command
        if (option == "cls" || option == "clear"){
            clscrn();
        }
        //Lorem Ipsum command
        if (option == "Lorem Ipsum"){
            cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n";
        }
        //Year command
        if (option == "year"){
            time_t t;
            time(&t);
            string current_time = ctime(&t);
            string current_year = current_time.substr(20);
            cout << current_year;
        }
        //username command
        if (option.find("username ") == 0){
            //defining the argument
            string usrname = option.substr(9);
            fstream Data;
            string cWd = cwd;
            string CWD = cWd +"\\";
            string DATA = CWD + "Data.dat";
            char dat[40];
            strcpy(dat,DATA.c_str());
            //cout << dat;
            Data.open(dat,ios::out);
            Data << usrname + ":" + machine;
            Data.close();
        }
        //machine command
        if (option.find("machine ") == 0){
            //defining the argument
            string machiname = option.substr(8);
            fstream Data;
            string cWd = cwd;
            string CWD = cWd +"\\";
            string DATA = CWD + "Data.dat";
            char dat[40];
            strcpy(dat,DATA.c_str());
            Data.open(dat,ios::out);
            Data << username + ":" + machiname;
            Data.close();
        }
        //local date command
        if (option == "date"){
            time_t t;
            time(&t);
            string current_time = ctime(&t);
            string local_time = current_time.substr(10);
            string current_year = current_time.substr(20);
            string final_time = local_time.substr(0,local_time.find(current_year));
            string date = current_time.substr(0,current_time.find(final_time));
            cout << date << '\n';

        }
        //local time command
        if (option == "time"){
            time_t t;
            time(&t);
            string current_time = ctime(&t);
            string local_time = current_time.substr(10);
            string current_year = current_time.substr(20);
            string final_time = local_time.substr(0,local_time.find(current_year));
            cout << "Current local time :" << final_time << endl;
        }
        //whoami command
        if (option == "whoami"){
            cout << username << endl;
        }
        //making a command to mute the click sound
        if (option == "mute"){
            song.open(wav,ios::out);
            song << "mute";
            song.close();
        }
        //making a command to enable the click sound
        if (option == "play"){
            song.open(wav,ios::out);
            song << "play";
            song.close();
        }
        //exit command
        if (option == "leave" || option == "quit"){
            break;
        }
        //version command
        if (option == "version" || option == "-v"){
            cout << "Ahmed Amr's Command-Line Shell v1.6.18.21 Stable release.\n";
        }
        //echo commands
        //green color
        if (option.find("echo green ") == 0){
            //defining the argument
            string echo = option.substr(11);
            cout << Green << echo << Color_Off << '\n';
        }
        //purple color
        if (option.find("echo purple ") == 0){
            //defining the argument
            string echo = option.substr(12);
            cout << Purple << echo << Color_Off << '\n';
        }
        //cyan color
        if (option.find("echo cyan ") == 0){
            //defining the argument
            string echo = option.substr(10);
            cout << Cyan << echo << Color_Off << '\n';
        }
        //yellow color
        if (option.find("echo yellow ") == 0){
            //defining the argument
            string echo = option.substr(12);
            cout << Yellow << echo << Color_Off << '\n';
        }
        //blue color
        if (option.find("echo blue ") == 0){
            //defining the argument
            string echo = option.substr(10);
            cout << Blue << echo << Color_Off << '\n';
        }
        //red color
        if (option.find("echo red ") == 0){
            //defining the argument
            string echo = option.substr(9);
            cout << Red << echo << Color_Off << '\n';
        }
        //the normal echo command
        if (option.find("echo ") == 0 ){
            //defining the argument
            string echo = option.substr(5);
            //making the command ignores all the colors
            if (echo.find("red") == 0 || echo.find("green") == 0 || echo.find("blue") == 0 || echo.find("yellow") == 0 || echo.find("cyan") == 0 || echo.find("purple") == 0){ 
            }else{
                cout << echo << '\n';
            }
        }
        //printing the number of acronyms in the shell
        if (option == "def count"){
            int count = 0;
            //looping through the map
            for (auto itr = Acronyms.begin();itr != Acronyms.end();itr++){
                count++;
            }
            cout << "The number of acronyms built-in the shell is " << count << endl;
        }
        //making a command that defines acronyms and making the "def count" command ignore this command
        else if (option.find("def ") == 0){
            //defining the argument
            string def = option.substr(4);
            //making the argument letters in uppercase
            for_each(def.begin(),def.end(),[](char & c){c = ::toupper(c);});
            //raising an error if the acronym wasn't found
            if (Acronyms.find(def) == Acronyms.end()){
                cout << "(404) Not Found.";
            }
            cout << Acronyms[def] << '\n';
        }
        //making a command to turn all the letters in uppercase
        if (option.find("upper ") == 0){
            //defining the argument
            string upper = option.substr(6);
            //making the argument letters in uppercase
            for_each(upper.begin(),upper.end(),[](char & c){c = ::toupper(c);});
            cout << upper << '\n';
        }
        //making a command to turn all the letters in lowercase
        if (option.find("lower ") == 0){
            //defining the argument
            string lower = option.substr(6);
            for_each(lower.begin(),lower.end(),[](char & c){c = ::tolower(c);});
            cout << lower << '\n';
        }
        //making a command that creates files
        if (option.find("touch ") == 0){
            //defining the argument
            string read = option.substr(6);
            fstream file;
            file.open(read,ios::out);
            string input;
            file << input;
            file.close();
        }
        //making a command that measures a string lenght
        if (option.find("len ") == 0){
            //defining the argument
            string leng = option.substr(4);
            cout << leng.length() << '\n';
        }
        //making a help command
        if (option == "help"){
            fstream h;
            h.open("instructions",ios::in);
            string input;
            while (h){
                getline(h,input);
                cout << input << '\n';
            }
            h.close();
        }
        //cat command that reads files
        if (option.find("cat ") == 0){
            //defining the argument
            string read = option.substr(4);
            fstream file;
            file.open(read,ios::in);
            while (file){
                string input;
                getline(file,input);
                cout << input << '\n';
            }
            file.close();
        }
        //cat command that appends strings to a file
        if (option.find("cat >> ") == 0){
            //defining the argument
            string read = option.substr(7);
            fstream file;
            file.open(read,ios::app);
            string input;
            while (file){
                cout << ">>";
                getline(cin,input);
                if (input == "done"){
                    break;
                }
                file << input <<'\n';
            }
            file.close();
        }
        //cat command that replaces old data within a file with new data
        if (option.find("cat > ") == 0){
            //defining the argument
            string read = option.substr(6);
            fstream file;
            file.open(read,ios::out);
            string input;
            while (file){
                cout << ">>";
                getline(cin,input);
                if (input == "done"){
                    break;
                }
                file << input << '\n';
            }
            file.close();
        }
        //making an encryptor
        if (option.find("encrypt ") == 0){
            //defining the argument
            string encr = option.substr(8);
            int key = 4;
            for (int i = 0;(i < 100 && encr[i] != '\0');i++){
                encr[i] = encr[i] + key;
                }
            cout << encr << '\n';
        }
        //making a decryptor
        if (option.find("decrypt ") == 0){
            //defining the argument
            string decr = option.substr(8);
            int key = 4;
            for (int i = 0;(i < 100 && decr[i] != '\0');i++){
                decr[i] = decr[i] - key;
                }
            cout << decr << '\n';
        }
        //making the pwd command (Prints the current Working Directory)
        if (option == "pwd"){
            char cwd[256];
            if (getcwd(cwd,sizeof(cwd)) != NULL){
                cout << cwd << '\n';
            }
        }
        //making cd .. command
        if (option == "cd .."){
            chdir("..");
        }
        //making cd command
        if (option.find("cd ") == 0){
            //defining the argument
            string dir = option.substr(3);
            char Directory[256];
            strcpy(Directory,dir.c_str());
            if (chdir(Directory) == 0){
                chdir(Directory);
            }else{
                cout << "Invalid Directory." << '\n';
            }
        }
        //making a command that searches for a string in Google
        if (option.find("google ") == 0){
            //defining the argument and appending Google link to it
            string result ="https://www.google.com/search?q=" + option.substr(7);
            char url[256];
            strcpy(url,result.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        //making a command that searches for a string in Bing
        if (option.find("bing ") == 0){
            //defining the argument and appending Bing link to it
            string result ="https://www.bing.com/search?q=" + option.substr(5);
            char url[256];
            strcpy(url,result.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        //making a command that searches for a string in Yahoo
        if (option.find("yahoo ") == 0){
            //defining the argument and appending Yahoo link to it
            string result ="https://search.yahoo.com/search?p=" + option.substr(6);
            char url[256];
            strcpy(url,result.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        //making a command that searches for a string in Duckduckgo
        if (option.find("duckduckgo ") == 0){
            //defining the argument and appending Duckduckgo link to it
            string result ="https://duckduckgo.com/?q=" + option.substr(11);
            char url[256];
            strcpy(url,result.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        //making a command that redirects to a url
        if (option.find("www.") == 0){
            option = "https://" + option;
            char url[256];
            strcpy(url,option.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        else if (option == "facebook"||option == "youtube"||option == "instagram"||option == "twitter"||option == "discord"||option == "microsoft"){
            option = "https://www." + option + ".com";
            char url[256];
            strcpy(url,option.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        else if (option.find("https://") == 0 || option.find("http://") == 0){
            char url[256];
            strcpy(url,option.c_str());
            ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        }
        //making a command that can run programs like ./example
        if (option.find("./") == 0){
            //defining the argument
            string prog = option.substr(2);
            string msg;
            char Prog[256];
            strcpy(Prog,prog.c_str());
            system(Prog);
        }
        //this is basically an easter egg that turns the shell into a clock but you can't exit it :/
        if (option == "clock"){
            while (true){
                time_t t;
                time(&t);
                string current_time = ctime(&t);
                string local_time = current_time.substr(10);
                string current_year = current_time.substr(20);
                string final_time = local_time.substr(0,local_time.find(current_year));
                cout << final_time << endl;
                clscrn();
                string op;
                char Op[256];
                strcpy(Op,op.c_str());
            }
        }
        //making the ls command to list all files and folders in the current working directory
        if (option == "ls"){
            DIR *dir;
            struct dirent *ent;
            if ((dir = opendir (".\\")) != NULL) {
                while ((ent = readdir (dir)) != NULL) {
                    cout << ent->d_name << '\n';
                }
                closedir (dir);
                //making an error in case of failure
                } else {
                    perror ("");
                    return EXIT_FAILURE;
                }
        }
        //credits command
        if (option == "credits"){
            cout << "Made with " << Red <<"Love"<< Color_Off <<" & "<< Yellow <<"Passion"<< Color_Off <<" in Egypt by "<< Cyan <<"Ahmed Amr"<< Color_Off << "." << '\n';
        }
        //contact command
        if (option == "contact"){
            cout << "You can contact the creator (Ahmed Amr) on discord by searching for 'Ahmed Amr#9322'\n";
        }
        //making konami code easter egg but I made it in different forms because I don't really know the original form
        if (option == "up up down down left right left right B S start" || option == "up up down down left right left right b s start" || option == "up up down down left right left right BS start" || option == "up up down down left right left right bs start"){
            cout << "Konami code seems to be valid lol.\n";
        }
        //making a command that prints system information
        if (option == "system info"){
            cout << "Number of processors : "<< sysinfo.dwNumberOfProcessors << endl;
            cout << "Page size : " << sysinfo.dwPageSize << endl;
            cout << "Minimum Application Address : " << sysinfo.lpMinimumApplicationAddress << endl;
            cout << "Maximum Application Address : " << sysinfo.lpMaximumApplicationAddress << endl;
        }
        //making a command that checks if a number is prime or not
        if (option.find("prime ") == 0){
            bool isPrime = true;
            int i , num;
            //checking if the number is negative or not
            if (option.substr(6).find('-') == 0){
                num = stoi(option.substr(7));
                cout << option.substr(6) << " is a negative number and negative numbers can't be prime and " ;
            }
            else
                num = stoi(option.substr(6));
            // 0 and 1 are not prime numbers
            if (num == 0 || num == 1) {
                isPrime = false;
            }
            //making a loop that checks if this number is divisible by i
            else {
                for (i = 2; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime)
                cout << num << " is a prime number\n";
            else
                cout << num << " isn't a prime number\n";
        }
        //This is the rest of the rgb-to-hex command
        if (option == "rgb-to-hex"){
            int R,G,B;
            string aar,gee,bee;
            bool done = false;
            cout << "Enter the amount of red color (0-255) : ";
            getline(cin,aar);
            cout << "Enter the amount of green color (0-255) : ";
            getline(cin,gee);
            cout << "Enter the amount of blue color (0-255) : ";
            getline(cin,bee);
            R = stoi(aar);
            G = stoi(gee);
            B = stoi(bee);
            if (-1 < R > 255 && -1 < G > 255 && -1 < B > 255){
                cout << "Error please enter valid arguments.\n";    
            }
            else if (-1 < R < 255 && -1 < G < 255 && -1 < B < 255){
                done = true;
                if (done){
                    rgbToHex(R,G,B);
                    cout << endl;
                }   
            }else{
                cout << "Error please enter valid arguments.\n";
            }
        }
    }
    return 0;
}
//the end of the program