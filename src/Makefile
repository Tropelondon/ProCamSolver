# My Makefile

MAIN = mainTest.o
#MAIN = main.o
OBJS = FundamentalMatrix.o
#OBJS = staticMeasurementMatrix.o staticMotionMatrix.o staticStrumTriggsSolver.o
#CPPFLAGS = -O3 -frepo
#CPPFLAGS = -O3
LIBS =

all: $(OBJS) $(MAIN)
	g++ $(OPTFLAGS) $(CPPFLAGS) $(OBJS) $(MAIN) $(LIBS)

clean:
	rm $(OBJS) $(MAIN)
