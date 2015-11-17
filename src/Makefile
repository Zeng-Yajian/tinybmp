
CC  = gcc
CXX = g++
AR  = ar
RM  = rm -rf

CPPFLAGS = -Wall
LDFLAFS  = -g
LDLIBS   =
AFLAGS   = -rcs

TARGET = libbmp.a

SRCS = libbmp.cc
OBJS = $(subst .cc,.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(AFLAGS) $@ $<

depend: .depend

.depend: $(SRCS)
	rm -rf ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend

.PHONY: clean distclean

clean:
	$(RM) $(OBJS) $(TARGET)

distclean:
	$(RM) *~ .depend $(TARGET) *.o

include .depend
