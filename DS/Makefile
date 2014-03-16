
SUBDIRS=list queue stack  

include $(TOPDIR)/Config/config.mk

all:subdirs

clean:
	for dir in $(SUBDIRS); do $(MK)-C $$dir  clean; done
.PHONY: clean  all subdirs 
