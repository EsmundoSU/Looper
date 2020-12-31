echo Run test
set loopLimit=100000000
.\bin\looper_O0.exe %loopLimit%
.\bin\looper_O1.exe %loopLimit%
.\bin\looper_O2.exe %loopLimit%
.\bin\looper_O3.exe %loopLimit%
.\bin\looper_Os.exe %loopLimit%
.\bin\looper_Ofast.exe %loopLimit%