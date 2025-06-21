# KNNClassifier

This is a simple document classifier based on the K-Nearest Neighbors (KNN) algorithm.

## Overview

The classifier attempts to predict the category of a given text based on its similarity to documents in a labeled dataset. It uses one of two distance metrics—**Cosine Similarity** or **Euclidean Distance**—to determine the nearest neighbors.

The dataset used is a collection of labeled news articles from the [20 Newsgroups dataset](http://qwone.com/~jason/20Newsgroups/).

## Usage

1. Place your test document inside the `test.txt` file.
2. Run the classifier to obtain a predicted category for the document.

## How It Works

The KNN algorithm finds the **k** most similar documents in the dataset and assigns the label that appears most frequently among them. The value of **k** should be chosen carefully for optimal results.

### Supported Distance Metrics
- **Cosine Similarity**
- **Euclidean Distance**

## Compilation

To compile the project:

```bash
g++ -std=c++17 knn.cc -o exe
