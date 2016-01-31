TEMP=$(shell find . -name "*~")
clean:
	rm -f $(shell find . -name "*.o") $(TEMP)
