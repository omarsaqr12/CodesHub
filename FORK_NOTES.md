# Notes on this fork

This repository is a fork of [diwas7777/CodesHub](https://github.com/diwas7777/CodesHub), a community-maintained multilingual collection of programming examples. The existing files and original README retain their original contributor attribution and GPL-2.0 license. The collection should **not** be attributed in its entirety to the owner of this fork.

## Contribution made in this fork

The two commits on October 20, 2023, after upstream commit [`387f406`](https://github.com/omarsaqr12/CodesHub/commit/387f4061ff84f057e351e6ad5f3f651a6d947094), added [`C++/normal_binary_search.cpp`](C%2B%2B/normal_binary_search.cpp), as well as local Visual Studio state. The binary-search example is the identifiable algorithm contribution in that commit range. This branch adds a runnable demonstration, focused regression tests, a scoped GitHub Actions workflow, and these fork notes.

### Run the contributed example

Requires a C++17 compiler:

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic 'C++/normal_binary_search.cpp' -o binary-search-demo
./binary-search-demo
# Target 7 found at index 3

g++ -std=c++17 -Wall -Wextra -Wpedantic tests/test_normal_binary_search.cpp -o binary-search-tests
./binary-search-tests
```

The search assumes ascending order and valid inclusive bounds; it returns `-1` when absent. Duplicate values may return any matching index. The focused tests cover this contributed example **only**; they are not evidence that the entire inherited collection has been verified.

## Maintenance note

The `.vs/` directory contains previously committed local Visual Studio cache/workspace data. It has been **left in Git history and the current tree** to avoid deleting existing material without approval. The new `.gitignore` prevents newly untracked cache files, but it does not untrack the existing files. Their removal can be reviewed separately.
