//last edit 10:30pm UTC +2:00 june 13th 2021
//the beginning of the program
#include <iostream>         //for some basic stuff
#include <string>           //for some basic functions like substr()
#include <fstream>          //for opening and etiting files
#include <dirent.h>         //for the ls command
#include <map>              //for the map of acronyms
#include <cstring>          //for converting from a string to an int or a float
#include <algorithm>        //for for_each
#include <ctime>            //for the time commands
#include <unistd.h>         //for system stuff
#include <windows.h>        //for system stuff and can't work on unix-like operating systems (macos,linux)
#include "includes/rgb.h"   //for RGB functionality
#include <cstdio>
//adding the WinMM.lib to the program to play music
#pragma comment(lib,"Winmm.lib")
using namespace std;
//making a command that clears the console
void clscrn() {
    system("cls");
}

//the main function
int main()
{
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
        {"CREDITS","Made with Love & Passion in Egypt by Ahmed Amr."},
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
        {"SSD","Solid-State Drive"},
        {"IT","Information Technology"},
        {"SQL","Structured Query Language"},
        {"IGN","In Game Name"},
	    {"LTS","Long-Term Support"},
        {"XFCE","Cholesterol-Free Desktop Environment"},
    	{"MCPE","Minecraft Pocket Edition"},
        {"AJAX","Asynchronous JavaScript and XML"},
	    {"COM","Component Object Model"},
        {"IDE","Integrated Development Environment"},
    	{"JDK","Java Development Kit"},
        {"OOP","Object Oriented Programming"},
	    {"PHP","Personal Home Page/PHP Hypertext Preprocessor"},
        {"SDK","Software Development Kit"}
    };
    //help map
    map<string,string> Help = {
        {"rename","renames a file (param) to the given input | params:1 file"},
        {"rm","removes a file or an empty folder with the name of the given param | params: 1 file"},
        {"credits","gives credits about Terminally creator | no params"},
        {"contact","undefined"},
        {"reverse","reverses a param | params: 1 string"},
        {"encrypt","encrypt a param   | params: 1 string"},
        {"decrypt","decrypts an encrypted param  | params: 1 string"},
        {"len","returns the length of a param  | params: 1 string"},
        {"help","returns this message | params: 1 string"},
        {"whoami","returns the program username | no params"},
        {"exit","exits the program | no params"},
        {"touch","creates a file with the name of the given param | params: 1 string"},
        {"username","changes the username to the given param | params: 1 string"},
        {"machine","changes the machine name to the given param | params: 1 string"},
        {"ls","lists all files and folders in the current working directory | no params"},
        {"pwd","returns the current working directory | no params"},
        {"cd","changes the directory to the given param | params: 1 string"},
        {"cls","clears the screen | no params"},
        {"def","explains an acronym | params: 1 string"},
        {"upper","transfers the param into upper case | params: 1 string"},
        {"lower","transfers the param into lower case | params: 1 string"},
        {"time","returns the current time | no params"},
        {"date","returns the current date | no params"},
        {"year","returns the current year | no params"},
        {"Loren Ipsum","outputs the lorem ipsum text | no params"},
        {"prime","outputs if the number is prime or not | params: 1 integer"},
        {"google","searches for the param in google | params: 1 string"},
        {"bing","searches for the param in bing | params: 1 string"},
        {"yahoo","searches for the param in yahoo | params: 1 string"},
        {"duckduckgo","searches for the param in duckduckgo | params: 1 string"},
        {"play","enables the program sound | no params"},
        {"mute","mutes the program sound | no params"},
        {"echo","repeats a param | params: 1 string or 1 color and 1 string"},
        {"cat","cat >> FILENAME appends text to a file | params: 1 file\ncat > FILENAME replaces text in a file | params: 1 file\ncat FILENAME outputs text in a file | params: 1 file"}
    };
    map <int,string> Wise = {
        {0,"Be yourself; everyone else is already taken. - Oscar Wilde"},
        {1,"I'm selfish, impatient and a little insecure.\nI make mistakes, I am out of control and at times hard to handle.\nBut if you can't handle me at my worst, then you sure as hell don't deserve me at my best. - Marilyn Monroe"},
        {2,"Two things are infinite: the universe and human stupidity; and I'm not sure about the universe. - Albert Einstein"},
        {3,"Be the change that you wish to see in the world. - Mahatma Gandhi"},
        {4,"A day without laughter is a day wasted. - Nicolas Chamfort"},
        {5,"There is nothing either good or bad, but thinking makes it so. - William Shakespear, Hamlet"},
        {6,"Trust yourself. You know more than you think you do. - Benjamin Spock"},
        {7,"Love For All, Hatred For None. - Khalifatul Masih III"},
        {8,"Change the world by being yourself. - Amy Poehler"},
        {9,"Every moment is a fresh beginning. - T.S Eliot"},
        {10,"Never regret anything that made you smile. - Mark Twain"},
        {11,"Die with memories, not dreams. - Unknown"},
        {12,"Aspire to inspire before we expire. - Unknown"},
        {13,"Everything you can imagine is real. - Pablo Picasso"},
        {14,"Simplicity is the ultimate sophistication. - Leonardo da Vinci"},
        {15,"Whatever you do, do it well. - Walt Disney"},
        {16,"What we think, we become. - Buddha"},
        {17,"All limitations are self-imposed. - Oliver Wendell Holmes"},
        {18,"Tough times never last but tough people do. - Robert H. Schiuller"},
        {19,"Kindness is a mark of faith, and whoever has not kindness has not faith. - Prophet Muhammad"},
        {20,"Problems are not stop signs, they are guidelines. - Robert H. Schiuller"},
        {21,"One day the people that don't even believe in you will tell everyone how they met you. - Johnny Depp"},
        {22,"I have nothing to lose but something to gain. - Eminem"},
        {23,"I will remember and recover, not forgive and forget. - Unknown"},
        {24,"Happiness depends upon ourselves. - Aristotle"},
        {25,"Change the game, don't let the game change you. - Macklemore"},
        {26,"When words fail, music speaks. - Shakespeare"},
        {27,"Strive for greatness. - Lebron James"},
        {28,"To live will be an awfully big adventure. - Peter Pan"},
        {29,"And still, I rise. - Maya Angelou"},
        {30,"Never let your emotions overpower your intelligence. - Drake"},
        {31,"Yesterday you said tomorrow. Just do it. - Nike"},
        {32,"It hurt because it mattered. - John Green"},
        {33,"Turn your wounds into wisdom. - Oprah Winfrey"},
        {34,"If I'm gonna tell a real story, I'm gonna start with my name. - Kendrick Lamar"},
        {35,"If you tell the truth you don't have to remember anything. - Mark Twain"},
        {36,"Have enough courage to start and enough heart to finish. - Jessica N. S. Yourko"},
        {37,"Hate comes from intimidation, love comes from appreciation. - Tyga"},
        {38,"I could agree with you but then we'd both be wrong. - Harvey Specter"},
        {39,"Oh, the things you can find, if you don't stay behind. - Dr. Seuss"},
        {40,"Determine your priorities and focus on them. - Eileen McDargh"},
        {41,"Be so good they can't ignore you. - Steve Martin"},
        {42,"Dream as if you'll live forever, live as if you'll die today. - James Dean"},
        {43,"I don't need it to be easy, I need it to be worth it. - Lil Wayne"},
        {44,"Nothing lasts forever but at least we got these memories. - J. Cole"},
        {45,"Don't you know your imperfections is a blessing? - Kendrick Lamar"},
        {46,"Reality is wrong, dreams are for real. - Tupac"},
        {47,"Try to be a rainbow in someone's cloud. - Maya Angelou"},
        {48,"There is no substitute for hard work. - Thomas Edison"},
        {49,"What consumes your mind controls your life- Unknown"},
        {50,"Wanting to be someone else is a waste of who you are. - Kurt Cobain"},
        {51,"The time is always right to do what is right. - Martin Luther King Jr."},
        {52,"Let the beauty of what you love be what you do. - Rumi"},
        {53,"May your choices reflect your hopes, not your fears. - Nelson Mandela"},
        {54,"A happy soul is the best shield for a cruel world. - Atticus"},
        {55,"White is not always light and black is not always dark. - Habeeb Akande"},
        {56,"Life becomes easier when you learn to accept the apology you never got. - R. Brault"},
        {57,"If the world was blind how many people would you impress? - Boonaa Mohammed"},
        {58,"The meaning of life is to give life meaning. - Ken Hudgins"},
        {59,"The true meaning of life is to plant trees, under whose shade you do not expect to sit. - Nelson Henderson"},
        {60,"Embrace the glorious mess that you are. - Elizabeth Gilbert"},
        {61,"Normality is a paved road: it's comfortable to walk but no flowers grow. - Vincent van Gogh"}

    };
    //system info
    SYSTEM_INFO sysinfo;
    GetSystemInfo(&sysinfo);
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
        char Lcwd[256];
        if (getcwd(Lcwd,sizeof(Lcwd)) != NULL){
        }
        //getting the username and machine name from data.dat file reverse
        fstream Data,song;
        string cWd = cwd;
        string CWD = cWd +"\\";
        string DATA = CWD + "Data.dat";
        string SONG = CWD + "audio.prop";
        char dat[256];
        char wav[256];
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
        //defining that we want get the current working folder not the whole directory
        string shortCwd;
        string currentWorkingDir = Lcwd;
        for (int i = currentWorkingDir.length() - 1;i >= 0;i--){
            shortCwd += currentWorkingDir[i];
        }
        shortCwd = shortCwd.substr(0,shortCwd.find("\\"));
        reverse(shortCwd.begin(),shortCwd.end());
        //defining the "[ username@machine ]cwd~$" prefix
        string PS = "[ " + username + "@" + machine + " ]" + shortCwd + '\\' +  "~" + "$ ";
        cout << PS;
        //getting input from the user
        getline(cin,option);
        //clear screen command
        if (option == "cls" || option == "clear"){
            clscrn();
        }
        if (option == "rm *"){
            DIR *dir;
            struct dirent *ent;
            if ((dir = opendir (".\\")) != NULL) {
                while ((ent = readdir (dir)) != NULL) {
                    string allFiles = ent->d_name;
                    char buf[60];
                    strcpy(buf,allFiles.c_str());
                    if(std::remove(buf)){
                        if (allFiles == "." || allFiles == ".."){}
                        else{cout << allFiles << " couldnt have been deleted" << '\n';}
                    }
                    else{}
                }
                closedir (dir);
                //making an error in case of failure
                } else {
                    perror ("");
                    return EXIT_FAILURE;
                }
        }
        else if (option.find("rm ") == 0){
            string filename = option.substr(3);
            char buf[60];
            strcpy(buf,filename.c_str());
            if(std::remove(buf)){
                cout << filename << " wasn't deleted!" << '\n';
            }
            else{}
        }
        if (option.find("rename ") == 0){
            string filename = option.substr(7);
            string newName;
            char from[60];
            char to[60];
            strcpy(from,filename.c_str());
            cout << "Enter the new file name : ";
            getline(cin,newName);
            strcpy(to,newName.c_str());
            if(std::rename(from,to)){
                cout << filename << " wasn't renamed!" << '\n';
            }
            else{}
        }
        //making a help command
        if (option == "help"){
            for (auto itr = Help.begin();itr != Help.end();itr++){
                cout << itr -> first << endl;
            }
        }
        //printing the number of acronyms in the shell
        else if (option == "command count"){
            int count = 0;
            //looping through the map
            for (auto itr = Help.begin();itr != Help.end();itr++){
                count++;
            }
            cout << "The number of commands built-in the shell is " << count << endl;
        }
        //making a command that defines acronyms and making the "def count" command ignore this command
        else if (option.find("help ") == 0){
            //defining the argument
            string command = option.substr(5);
            //raising an error if the command wasn't found
            if (Help.find(command) == Help.end()){
                cout << "(404) Command Not Found.";
            }
            cout << Help[command] << '\n';
        }
        //printing the number of quotes in the shell
        else if (option == "quotes count"){
            int count = 0;
            //looping through the map
            for (auto itr = Wise.begin();itr != Wise.end();itr++){
                count++;
            }
            cout << "The number of quotes built-in the shell is " << count << endl;
        }
        //making a command that defines acronyms and making the "def count" command ignore this command
        else if (option == "quote"){
            srand(time(NULL));
            int randomIndex = rand() % 62;
            cout << Wise[randomIndex] << '\n';
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
        if (option == "leave" || option == "quit" || option == "exit"){
            break;
        }
        //version command
        if (option == "version" || option == "-v"){
            cout << "Ahmed Amr's Command-Line Shell v1.7.13.21 Stable release.\n";
        }
        //echo command
        if (option.find("echo ") == 0 ){
            //defining the argument
            string echo = option.substr(5);
                cout << echo << '\n';
        }
        if (option.find("reverse ") == 0){
            string rev = option.substr(8);
            reverse(rev.begin(),rev.end());
            cout << rev << endl;
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
        else if (option.find("cd ") == 0){
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
            cout << "Made with Love & Passion in Egypt by Ahmed Amr." << '\n';
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
