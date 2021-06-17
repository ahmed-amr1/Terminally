
# VM v1.4.1 Stable-release
**VM** (v1.4.1 stable release) is a basic command-line shell made with C++.
![Screenshot_2021-06-16_20-04-00](https://user-images.githubusercontent.com/83289040/122277444-31e7b200-cee6-11eb-8583-563a35c9184f.png)

# Instructions

**v1.4 Stable release.**

`cls,clear                   ==> Clears the console.`

`whoami                      ==> Outputs the user name.`

`username <Argument>         ==> Changes the username.			               (Default:Root)`
                                                                             
`machine <Argument>          ==> Changes the machine name.					       (Default:VM)`
  
`leave,quit                  ==> Exits the Shell.`
  
`version,-v                  ==> Outputs the Shell version.				         (Current:"v1.4.1 stable release")`
  
`echo <color> <Argument>     ==> Outputs the given argument.               (Note:The color is optional,colors=[red,blue,green,yellow,purple,cyan])`
  
`find <Acronym>              ==> Searches for the given argument and returns its definition.`

`touch <File Name>           ==> Creates a file with the name of the given argument.`

`len <Argument>              ==> Outputs the number of characters in the given argument.`

`help                        ==> Returns this message.`

`cat <File Name>             ==> Reads a file with the name of the given argument.`

`cat > <File Name>           ==> Writes data in a file with the name of the given argument.	             (Note:Replaces old data with new one)`

`cat >> <File Name>          ==> Appends data in a file with the name of the given argument.             (Note:Appends new data to the old data)`

`encrypt <Argument>          ==> Outputs an encryption of the given argument.`

`decrypt <Argument>          ==> Outputs a decryption of the encrypted given argument.`

`time                        ==> Outputs the current local time.                                          (Pattern:HH:MM:SS)`

`year                        ==> Outputs the current year.`

`date                        ==> Outputs the current local date.`

`def <Argument>              ==> Outputs the definition of the acronym equal to the given argument.`

`upper <Argument>            ==> Outputs the given argument in uppercase letters.`

`lower <Argument>            ==> Outputs the given argument in lowercase letters.`

`ls                          ==> Outputs a list of all files and folders in the current directory.`

`cd <Directory>              ==> Changes the directory to a directory equal to the given argument.`

`pwd                         ==> Outputs the current working directory.`

**v1.4.1 Stable release.**

`Lorem Ipsum                 ==> Outputs "Lorem Ipsum" used since 1500s.`

`search <Argument>           ==> Searches for the given argument via google search engine.`

`system info                 ==> Outputs some information about hardware.`

**New additional features:**

1) **You can type:
`example.com` Or `https://www.example.com` Or `http://www.example.com` Or `https://example.com` Or `http://example.com`
And the shell will redirect you to the given url.**

2) **You can type** `def count` **to see the number of acronyms built-in the shell.**

**__Hope you enjoyed the shell!__**

# Source code.
**Follow the instructions to compile and run the program corrrectly.**
## Compiling instructions.
**To compile the program without the icon and version info do the following:**
1) Open the command-line.
2) Type `g++ -o VM VM.cpp` and hit enter.

Now you are ready to run the program.
**To compile the program with the icon and version info do the following:**
1) You have to install mingw64 and add it to path.
2) Navigate to the source code folder and open the command-line there.
3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file.
4) Type `windres my.rc -O coff -o my.res` to compile the version file.
5) Type `g++ -o VM VM.cpp ICON.res VER.res` to compile the program with the version and the icon files.

**To customize the icon do the following:**
1) Open `icon.rc` file.
2) Type `id ICON "ICON.ico"` in the `icon.rc` file (You can replace `ICON.ico` with any `.ico` file *example:`id ICON "pathToTheIcon/example.ico"`*).
3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file (You can replace `icon.rc` with the name of the `.rc` file you created and 
you can replace `ICON.res` with the name of the output file you want *example:`windres icon.rc -O coff -o example.res`* but the file must be a `.res` file).
4) Compile the icon file with the program or compile both the icon and version file with the program by typing
`g++ -o VM VM.cpp` `ICON.res` `VER.res` in the command line.

**To customize the version file do the following:**
1) Open `ver.rc` file.
2) Customize fields like ``VALUE "Type", "A basic C++ Command-line Shell"`` **<-- this string can be editable**.
3) You can also change both `FILEVERSION     1,4,1,0`**<--** and `PRODUCTVERSION  1,4,1,0`**<--**.
4) Open the command line and type `windres ver.rc -O coff -o VER.res` to compile the version file (You can replace `ver.rc` with the name of the `.rc` file you created and 
you can replace `VER.res` with the name of the output file you want *example:`windres ver.rc -O coff -o example.res`* but the file must be a `.res` file).
5) Compile 4) compile the version file with the program or compile both the icon and version file with the program by typing
`g++ -o VM VM.cpp` `ICON.res` `VER.res` in the command line.

**`Thanks for using VM and reading the instructions.`**

*Coded with ♥ in 🇪🇬 by Ahmed Amr 2021.*
