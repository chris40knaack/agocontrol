LD = $(CXX)

INCLUDES ?= -I../../shared

%.o : %.cpp
	$(CXX) -c $(CFLAGS) $(INCLUDES) -o $@ $<

all: agotimer

agotimer: sunrise.o agotimer.o ../../shared/CDataFile.o
	$(LD) -o $@ $(LDFLAGS) $^ -lqpidmessaging -lqpidtypes -lagoclient -lhdate

.PHONY: clean
clean:
	rm -f agotimer.o sunrise.o agotimer

install:
	$(INSTALL_DIR) $(DESTDIR)$(BINDIR)
	$(INSTALL_PROGRAM) agotimer $(DESTDIR)$(BINDIR)
