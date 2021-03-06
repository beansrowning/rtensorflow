% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/r_api.R
\name{loadSavedModel}
\alias{loadSavedModel}
\title{Load Saved Model}
\usage{
loadSavedModel(path, tags)
}
\arguments{
\item{path}{Path to the saved model}

\item{tags}{Tags associated with the graph (from {"serve", "train, "gpu"})}
}
\value{
Integer status
}
\description{
Loads a saved TensorFlow model built in python
}
