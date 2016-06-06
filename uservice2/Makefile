CXX      = g++
#CXXFLAGS = -Wall -ansi -g -pthread -I./hazelcast-cpp-client/Linux_64/external/include -I./hazelcast-cpp-client/Linux_64/hazelcast/include -DHAZELCAST -DCONFIG_OPUSONE
CXXFLAGS = -Wall -ansi -g -pthread
CC       = gcc
#CCFLAGS  = -g -I.  -I hiredis/ -I jansson/jansson-2.7/include/ -I zeromq/zeromq-3.2.3/x86_64/include/  -DHAZELCAST -DCONFIG_OPUSONE
CCFLAGS  = -g -I.  
OBJS     = main.o
OBJS1    = main.o

#OBJS_CPP =  mdns_hazelcast.o
#OBJS1_CPP = mdns_hazelcast.o

ms-usrv2 : $(OBJS)  
	$(CXX) -o $@ $(OBJS1)

all:  ms-usrv2

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $<
%.o : %.c
	$(CC) -c $(CCFLAGS) $<

#redis:
#    cd hiredis && $(MAKE)

clean:
	rm -fr image/ms-usrv2 *.o cmn/*.o
imagecp:
#mv acp_ag image/
	mv ms-usrv2-image/

