TOPDIR =$(shell pwd)
export  TOPDIR

SUBDIRS=Sort DS

all:

include $(TOPDIR)/Config/config.mk

all:subdirs

clean:
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir  clean; done

.PHONY: clean  all subdirs 
