% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/r_api.R
\name{Variable}
\alias{Variable}
\title{Variable Op}
\usage{
Variable(val, dtype, shape = length(val), name = NULL)
}
\arguments{
\item{val}{Vector for value of Constant node}

\item{dtype}{Shape of Tensor}

\item{shape}{Datatype of Tensor}

\item{name}{Optional custom name for node. If not specified, a random name is generated}
}
\value{
Unique name of node
}
\description{
Sets a variable op
}
