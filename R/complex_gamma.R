`lanczos` <- function(z, log=FALSE){

    stopifnot( all( base::Re( z ) >= 0.5 ) )

    out = as.vector( lanczos_cpp( base::Re( z ), 
                       base::Im( z ) ) )

    if( log ){
        return( out )
    } else {
        return( exp(out) )
    }
}

`complex_gamma` <- function(z, log=FALSE){
  
    out = as.vector( complex_lngamma_cpp( base::Re( z ), 
                     base::Im( z ) ) )
  
    if(log){        
      return( out )
    } else {
      return( exp(out) )
    }
}

`complex_factorial` <- function(z,log=FALSE){complex_gamma(z+1,log=log)}
