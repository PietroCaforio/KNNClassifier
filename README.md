# KNNClassifier
THis is a simple KNN document Classifier. \
To try this project you need to put a text in the "test.txt" file and the KNN will try to classify it in one of the categories of the dataset. (It will tell what the text is about). \
The dataset I used is a list of classified news documents from http://qwone.com/~jason/20Newsgroups/. \
If you don't know how the knn algorithm works: https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm .\
Basically it finds the first k (with k being an arbitrary natural number wisely chosen) nearest documents and selects the category based on the frequency it occurs on those first k docs. \
There's many ways to implement a metric for documents, I've implemented two: 
- Cosine similarity 
- Euclidean distance. 


Compile:
g++ -std=c++17 knn.cc -o exe
