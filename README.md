# esparse-file-checker
c++ application to check if file is sparse or not

## To build
```
g++ main.cpp -o sparse_checker
```

## To run
```
sparse_checker [PATH_TO_FILE]
```

## You can test with the 2 examples in this repo:

This will output in the console **'ESPARSO'**
```
sparse_checker esparso.txt
```

This will output in the console **'REGULAR'**
```
sparse_checker regular.txt
```
