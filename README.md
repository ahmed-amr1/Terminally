
# Terminally v1.6.26.21 Stable-release
**Terminally** (v1.6.26.21 stable release) is a basic command-line shell made with C++.
![GH](https://user-images.githubusercontent.com/83289040/123518584-60d6f400-d65b-11eb-8cf1-0f4d8f4277b5.png)

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

2) Type `g++ -o Terminally Terminally.cpp` and hit enter.

Now you are ready to run the program.

**To compile the program with the icon and version info do the following:**

1) You have to install mingw64 and add it to path.

2) Navigate to the source code folder and open the command-line there.

3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file.

4) Type `windres ver.rc -O coff -o VER.res` to compile the version file.

5) Type `g++ -o Terminally Terminally.cpp ICON.res VER.res` to compile the program with the version and the icon files.

**To customize the icon do the following:**

1) Open `icon.rc` file.

2) Type `id ICON "ICON.ico"` in the `icon.rc` file (You can replace `ICON.ico` with any `.ico` file.

*example:`id ICON "pathToTheIcon/example.ico"`*).

3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file (You can replace `icon.rc` with the name of the `.rc` file you created and 
you can replace `ICON.res` with the name of the output file you want *example:`windres icon.rc -O coff -o example.res`* but the file must be a `.res` file).

4) Compile the icon file with the program or compile both the icon and version file with the program by typing
`g++ -o Terminally Terminally.cpp ICON.res VER.res` in the command line.

**To customize the version file do the following:**

1) Open `ver.rc` file.

2) Customize fields like ``VALUE "Type", "A basic C++ Command-line Shell"`` **<-- this string can be editable**.

3) You can also change both `FILEVERSION     1,6,26,21`**<--** and `PRODUCTVERSION  1,6,26,21`**<--**.

4) Open the command line and type `windres ver.rc -O coff -o VER.res` to compile the version file (You can replace `ver.rc` with the name of the `.rc` file you created and 
you can replace `VER.res` with the name of the output file you want *example:`windres ver.rc -O coff -o example.res`* but the file must be a `.res` file).

5) Compile the version file with the program or compile both the icon and version file with the program by typing
`g++ -o Terminally Terminally.cpp ICON.res VER.res` in the command line.

# RGB to hexadecimal
"To convert an RGB value to a Hexadecimal color :"
let's say we wanna convert this RGB value to a haexadecimal color "rgb(120,45,203)"

let's say that the first number which is red is *X*

the second one which is green is *Y* 

and the third one which is blue is *Z*

we will convert x,y and z separately.

let's convert X to a hexadecimal

"the law = X/16,X/16 = int.float , hex = #int and float*16"

so coverting X will be equal to:

result = X/16

result = 120/16 = 7.5

converting the decimal floating point: 0.5 * 16 = 8

so the hex will be equal to `#780000`

Note:

0,1,2,3,4,5,6,7,8,9,10 is A,11 is B,12 is C,13 is D,14 is E,15 is F

so converting Z will be

result = Z/16

result = 203/16 = 12.6875 and 12 is equal to C

converting the decimal floating point: 0.6875 * 16 = 11 and 11 is equal to B

so the hex will be equal to `#BA0000` 

and x y and z = `#782DCB`

# **Important note:**

***Please don't remove the following files from the Terminally.exe directory :*** `Data.dat` And `instructions`.

# ***Credits***

***Coded with Love ♥ , Passion & C++ in 🇪🇬 by Ahmed Amr 2021.***

**Thanks for using Terminally and reading the instructions,Hope you enjoyed the shell!🥰**


