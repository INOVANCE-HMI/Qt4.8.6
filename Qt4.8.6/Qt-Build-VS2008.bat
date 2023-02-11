@echo off
call "%VS90COMNTOOLS%\vsvars32.bat"
set INCLUDE=%INCLUDE%;%cd%\include;
set LIB=%LIB%;%cd%\lib;
nmake distclean
ECHO y|configure.exe -opensource -debug-and-release -fast -no-exceptions  ^
-system-sqlite  -opengl desktop  ^
-qt-libpng -no-libmng -qt-libtiff -qt-libjpeg ^
-no-dbus -platform win32-msvc2008 ^
-no-phonon -no-phonon-backend -no-multimedia -no-audio-backend -no-webkit ^
-no-scripttools -no-declarative -no-declarative-debug ^
-no-style-plastique -no-style-cleanlooks -no-style-motif -no-style-cde ^
-no-native-gestures 
cd src
nmake
cd ..\tools
nmake
time /t 
pause