CC=cc -g
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CPPFLAGS = -Iinclude
LDFLAGS = -Llib -lm
TARGET0 = callerr1
TARGET1 = callerr
TARGET2 = copy2
TARGET3 = copy
TARGET4 = countchar
TARGET5 = datatypes
TARGET6 = f2c
TARGET7 = fahrtocels2
TARGET8 = fahrtocels3
TARGET9 = fahrtocels
TARGET10 = fct
TARGET11 = insult2
TARGET12 = macroprint
TARGET13 = malloc_test
TARGET14 = m
TARGET15 = plot_test
TARGET16 = printexn
TARGET17 = printn
TARGET18 = printone
TARGET19 = printten
TARGET20 = showchars
TARGET21 = showpars
TARGET22 = struct_test
TARGETS = struct_test showpars showchars printten printone printn printexn plot_test m malloc_test macroprint insult2 fct fahrtocels fahrtocels3 fahrtocels2 f2c datatypes countchar copy copy2 callerr callerr1
all: $(TARGETS)
$(TARGET0).o: callerr1.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET0): callerr1.o
	$(CC) -o callerr1 $< $(LDFLAGS)
$(TARGET1).o: callerr.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET1): callerr.o
	$(CC) -o callerr $< $(LDFLAGS)
$(TARGET2).o: copy2.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET2): copy2.o
	$(CC) -o copy2 $< $(LDFLAGS)
$(TARGET3).o: copy.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET3): copy.o
	$(CC) -o copy $< $(LDFLAGS)
$(TARGET4).o: countchar.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET4): countchar.o
	$(CC) -o countchar $< $(LDFLAGS)
$(TARGET5).o: datatypes.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET5): datatypes.o
	$(CC) -o datatypes $< $(LDFLAGS)
$(TARGET6).o: f2c.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET6): f2c.o
	$(CC) -o f2c $< $(LDFLAGS)
$(TARGET7).o: fahrtocels2.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET7): fahrtocels2.o
	$(CC) -o fahrtocels2 $< $(LDFLAGS)
$(TARGET8).o: fahrtocels3.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET8): fahrtocels3.o
	$(CC) -o fahrtocels3 $< $(LDFLAGS)
$(TARGET9).o: fahrtocels.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET9): fahrtocels.o
	$(CC) -o fahrtocels $< $(LDFLAGS)
$(TARGET10).o: fct.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET10): fct.o
	$(CC) -o fct $< $(LDFLAGS)
$(TARGET11).o: insult2.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET11): insult2.o
	$(CC) -o insult2 $< $(LDFLAGS)
$(TARGET12).o: macroprint.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET12): macroprint.o
	$(CC) -o macroprint $< $(LDFLAGS)
$(TARGET13).o: malloc_test.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET13): malloc_test.o
	$(CC) -o malloc_test $< $(LDFLAGS)
$(TARGET14).o: m.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET14): m.o
	$(CC) -o m $< $(LDFLAGS)
$(TARGET15).o: plot_test.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET15): plot_test.o
	$(CC) -o plot_test $< $(LDFLAGS)
$(TARGET16).o: printexn.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET16): printexn.o
	$(CC) -o printexn $< $(LDFLAGS)
$(TARGET17).o: printn.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET17): printn.o
	$(CC) -o printn $< $(LDFLAGS)
$(TARGET18).o: printone.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET18): printone.o
	$(CC) -o printone $< $(LDFLAGS)
$(TARGET19).o: printten.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET19): printten.o
	$(CC) -o printten $< $(LDFLAGS)
$(TARGET20).o: showchars.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET20): showchars.o
	$(CC) -o showchars $< $(LDFLAGS)
$(TARGET21).o: showpars.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET21): showpars.o
	$(CC) -o showpars $< $(LDFLAGS)
$(TARGET22).o: struct_test.c
	$(CC) -c  $< $(CPPFLAGS)
$(TARGET22): struct_test.o
	$(CC) -o struct_test $< $(LDFLAGS)
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGETS)
