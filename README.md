
<h1 align="center"> Terminally v1.7.13.21 Stable-release </h1>

<h3 align="center">Terminally (v1.7.13.21 stable release) is a basic command-line shell made with C++. </h3>

[![MIT license](https://img.shields.io/badge/License-MIT-blue.svg)](https://lbesson.mit-license.org/)
[![Coded via VScode](https://img.shields.io/badge/coded%20via-Visual%20Studio%20Code-007ACC?logo=visualstudiocode)](https://code.visualstudio.com/)
[![Download Repository](https://img.shields.io/github/repo-size/Ahmed-Amr-Github/Terminally?color=lightgreen&label=Download&logo=github)](https://github.com/Ahmed-Amr-Github/Terminally/archive/refs/heads/main.zip)
[![Made with cpp](https://img.shields.io/badge/Coded%20with-C%2B%2B-cyan?style=flat&logo=cplusplus)](https://en.wikipedia.org/wiki/C%2B%2B)
[![Made by Ahmed Amr](https://img.shields.io/badge/Credits-Ahmed%20Amr-orange?style=flat)](https://github.com/Ahmed-Amr-Github/Terminally/)

[![Terminally](https://img.shields.io/badge/-Terminally-black?style=flat&logo=windowsterminal)](https://github.com/Ahmed-Amr-Github)
[![OS](https://img.shields.io/badge/OS-windows%2010+-yellowgreen?style=flat&logo=windows)](https://www.microsoft.com/en-us/software-download/windows10ISO)
[![architecture](https://img.shields.io/badge/architecture-32%2F64--bit-yellow?style=flat&logo=intel)](https://en.wikipedia.org/wiki/Comparison_of_instruction_set_architectures)
[![made in Egypt](https://img.shields.io/badge/Made%20in-Egypt-darkred?style=flat&logo=wikipedia)](https://en.wikipedia.org/wiki/Egypt)
[![Version](https://img.shields.io/badge/Version-v1.7.13.21-darkorange?style=flat)]()



![Terminally official preview](https://github.com/Ahmed-Amr-Github/Terminally/blob/main/Source%20code/Terminally.png)


# Instructions

<details> <summary> Features </summary>

1) **You can type:
`example.com` Or `https://www.example.com` Or `http://www.example.com` Or `https://example.com` Or `http://example.com`
And the shell will redirect you to the given url.**

2) **You can type** `def count` **to see the number of acronyms built-in the shell.**

3) **Bug fixes.**

4) **Added web shortcuts like `facebook`,`youtube`,`twitter`,`discord` and `github.`** 

5) **Improved help command.**
</details>

**Make sure to read [instructions file](./instructions.txt)**

# Source code.

**Follow the instructions to compile and run the program corrrectly.**

### Compiling instructions.

**To compile and run the program easily just run `compileAndRun.bat` file.**

<details> <summary> To compile the program only (without version or icon) </summary>

1) Open the command-line.

2) Type `g++ -o Terminally main.cpp includes/rgb.h -lWinmm` and hit enter.

Now you are ready to run the program.
</details>

<details> <summary> To compile the program with the icon and version info </summary>

1) You have to install mingw64 and add it to path.

2) Navigate to the source code folder and open the command-line there.

3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file.

4) Type `windres ver.rc -O coff -o VER.res` to compile the version file.

5) Type `g++ -o Terminally main.cpp includes/rgb.h ICON.res VER.res -lWinmm` to compile the program with the version and the icon files.
</details>

<details> <summary> To customize the icon </summary>
  
1) Open `icon.rc` file.

2) Type `id ICON "ICON.ico"` in the `icon.rc` file (You can replace `ICON.ico` with any `.ico` file.

*example:`id ICON "pathToTheIcon/example.ico"`*).

3) Type `windres icon.rc -O coff -o ICON.res` to compile the icon file (You can replace `icon.rc` with the name of the `.rc` file you created and 
you can replace `ICON.res` with the name of the output file you want *example:`windres icon.rc -O coff -o example.res`* but the file must be a `.res` file).

4) Compile the icon file with the program or compile both the icon and version file with the program by typing
`g++ -o Terminally main.cpp includes/rgb.h ICON.res VER.res -lWinmm` in the command line.
</details>

<details> <summary> To customize the version </summary>

1) Open `ver.rc` file.

2) Customize fields like ``VALUE "Type", "A basic C++ Command-line Shell"`` **<-- this string can be editable**.

3) You can also change both `FILEVERSION     1,7,13,21`**<--** and `PRODUCTVERSION  1,7,13,21`**<--**.

4) Open the command line and type `windres ver.rc -O coff -o VER.res` to compile the version file (You can replace `ver.rc` with the name of the `.rc` file you created and 
you can replace `VER.res` with the name of the output file you want *example:`windres ver.rc -O coff -o example.res`* but the file must be a `.res` file).

5) Compile the version file with the program or compile both the icon and version file with the program by typing
`g++ -o Terminally main.cpp includes/rgb.h ICON.res VER.res  -lWinmm` in the command line.
</details>

<details> <summary> RGB to hexadecimal guide </summary>

- "To convert an RGB value to a Hexadecimal color :" 
 
- let's say we wanna convert this RGB value to a haexadecimal color "rgb(120,45,203)"
 
- let's say that the first number which is red is X
 
- the second one which is green is Y
 
- and the third one which is blue is Z
 
- we will convert x,y and z separately.
 
- let's convert X to a hexadecimal
 
- "the law = X/16,X/16 = int.float , hex = #int and float*16"
 
- so coverting X will be equal to:
 
- result = X/16
 
- result = 120/16 = 7.5
 
- converting the decimal floating point: 0.5 * 16 = 8
 
- so the hex will be equal to #780000
 
- Note:
 
- 0,1,2,3,4,5,6,7,8,9,(10 is A),11 is B,12 is C,13 is D,14 is E,15 is F
 
- so converting Z will be
 
- result = Z/16
 
- result = 203/16 = 12.6875 and 12 is equal to C
 
- converting the decimal floating point: 0.6875 * 16 = 11 and 11 is equal to B
 
- so the hex will be equal to #BA0000
 
- and x y and z = #782DCB
 
- credits: Ahmed Amr 2021
</details>

# **Important note:**

***Please don't remove the following files from the Terminally.exe directory :*** `Data.dat` And `audio.prop`.
  
***The -lWinmm command used in mingw64 is for the sound of the shell***
  
***The includes/rgb.h used in mingw64 is for the rgb functions***

# ***Credits***

***Coded with Love ♥ , Passion & C++ in 🇪🇬 by Ahmed Amr 2021.***

**Thanks for using Terminally and reading the instructions,Hope you enjoyed the shell!🥰**


