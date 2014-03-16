CC = gcc 
MK = make
export CC  MK

subdirs:	
	for dir in $(SUBDIRS); do $(MK) -C $$dir  all; done
obj:
	for one in $(OBJ) ;do $(CC) -g -Wall $(addsuffix .c,$$one) -o $$one;done
