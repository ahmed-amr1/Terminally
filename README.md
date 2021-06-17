
# VM v1.4.1 Stable-release
**VM** (v1.4.1 stable release) is a basic command-line shell made with C++.
![Screenshot_2021-06-16_20-04-00](https://user-images.githubusercontent.com/83289040/122277444-31e7b200-cee6-11eb-8583-563a35c9184f.png)

# Instructions

**New additional features:**

1) **You can type:
`example.com` Or `https://www.example.com` Or `http://www.example.com` Or `https://example.com` Or `http://example.com`
And the shell will redirect you to the given url.**

2) **You can type** `def count` **to see the number of acronyms built-in the shell.**


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
**__Hope you enjoyed the shell!__**

*Coded with ♥ in 🇪🇬 by Ahmed Amr 2021.*
