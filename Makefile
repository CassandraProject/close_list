#	$Id: Makefile,v 1.3 1999/12/10 08:47:28 jeremy Exp jeremy $
#
#	rv Makefile
#
#	Jeremy Milum, 9-21-2004
#
CC= gcc
STRIP=-s
#OP_LVL=-O5
#DEBUG=-ggdb

PROG= close_list
OBJS= close_list.o
LIBS= -lfox -lsocket
CFLAGS= -Wall $(OP_LVL) $(DEBUG)
LFLAGS= $(STRIP) $(LIBS)

$(PROG):	$(OBJS)	
	$(CC) -o $(PROG) $(OBJS) $(LFLAGS)
	rm -f $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(PROG) core
