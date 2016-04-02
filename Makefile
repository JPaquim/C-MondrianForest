### Target Files
TARGET_EXE = exe
TARGET_LIB = libmondrianforest.a


### External library pcg_random ###
EXT = c-lab
EXT_DIR = C-LAB


### Linker flags ###
LFLAGS = -lc-lab
TSTFLAGS =  -lmondrianforest


### Base Makefile ###
include C-LAB/MakefileBase


### Make external library ### 
$($(EXT)_A_SRC):
	@echo building $(EXT)
	@make -C $(EXT_DIR)
