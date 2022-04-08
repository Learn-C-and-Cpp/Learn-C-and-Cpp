
#Start by defining variables
#program name  PROG assigned programe name 
PROG = mycpp 

#compiler name
CC = g++ 

#C++ Flags, optimazation level
CPPFLAGS = -std=c++20 -Werror -Wall -O2

#List all the *.cpp with .o extension
OBJS = mycpp.o

#program name $(mycpp):object $(mycpp.o) compiler $(CC) -o $(PROG) $(OBJS)
$(PROG) : $(OBJS) 
	$(CC) -o $(PROG) $(OBJS)
mycpp.o :
	$(CC) $(CPPFLAGS) -c  mycpp.cpp

#Other
#-----
clean :
	rm -f core $(PROG) $(OBJS)







