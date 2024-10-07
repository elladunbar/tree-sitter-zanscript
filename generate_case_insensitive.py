#!/usr/bin/env pypy3

import sys
import itertools

word = sys.argv[1]
if " " in word:
    print("Word must contain only letters in the alphabet.")
    sys.exit(1)

word_versions = tuple(zip(word.lower(), word.upper()))

capitalization_index_sets = itertools.product((0, 1), repeat=len(word))
for capitalization_index_set in capitalization_index_sets:
    combined_word = ""
    for i, capitalization_index in enumerate(capitalization_index_set):
        combined_word += word_versions[i][capitalization_index]

    print('"' + combined_word + '"')
