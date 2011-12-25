all:
	latex sample.tex; bibtex sample.aux;latex sample.tex; dvips sample.dvi; ps2pdf sample.ps
clean:
	rm *.log *.aux *.out *.snm *.nav *.toc *.dvi *.ps *.blg *.vrb *.bbl
