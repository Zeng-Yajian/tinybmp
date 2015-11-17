
CC  = gcc
CXX = g++
RM  = rm -rf

CPPFLAGS = -Wall
LDFLAFS  = -g
LDLIBS   = -L./src -lbmp

TARGET = dump

SRCS = main.cc
OBJS = $(subst .cc,.o,$(SRCS))


all: libs $(TARGET)

libs:
	@cd src && $(MAKE)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAFS) -o $(TARGET) $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	rm -rf ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend

.PHONY: clean distclean

clean:
	$(RM) $(OBJS)

distclean:
	$(RM) *~ .depend $(TARGET) *.o

include .depend
