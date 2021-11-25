# Name of the project
PROJECT_NAME = project_main.c

SRC = project_main.c
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build:
	gcc $(SRC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJECT_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJECT_NAME).$(EXEC))
