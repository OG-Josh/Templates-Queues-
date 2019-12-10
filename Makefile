CXX = g++

CXXFLAGS = -g

BINARY = hw12

TARFILE = hw12.tar

all: $(BINARY)

$(BINARY):
	$(CXX) $(CXXFLAGS) hw12.cpp -o $(BINARY)
clean:
	rm -rf $(BINARY) $(TARFILE)
tar:
	tar cf $(TARFILE) Makefile hw12.scr hw12.cpp queue.h