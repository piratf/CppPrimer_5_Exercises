.PHONY: clean
clean:
	find . -name "*.exe" | xargs rm -f
	find . -name "*.html" | xargs rm -f