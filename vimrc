set relativenumber
set number

set autoindent
set colorcolumn=80

" Empêche Vim de désélectionner la sélection visuelle lors de l'indentation
vnoremap < <gv
vnoremap > >gv

set list
set lcs=tab:..

autocmd BufNewFile * 0r ~/templates/c1

