CC 			= clang++
LDFLAGS = -std=c++17 -stdlib=libc++ 
SOURCES = task09.cpp 
OBJECTS = $(SOURCES:.cpp=.o)

release: $(SOURCES)
	$(CC) $(LDFLAGS) $(SOURCES) -o $@
	./$@

debug: $(SOURCES)
	$(CC) $(LDFLAGS) -g $(SOURCES) -o $@
	lldb $@
