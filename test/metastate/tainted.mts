state taintedness
   context reference
   oneof untainted, tainted
   annotations
      tainted reference ==> tainted
      untainted reference ==> untainted
   merge
      tainted + * ==> tainted
      * + tainted ==> tainted
   transfers
      tainted as untainted ==> error "Possibly tainted storage used as untainted."
      tainted as tainted ==> tainted
      untainted as tainted ==> untainted
      untainted as untainted ==> untainted
   defaults 
      reference ==> untainted
      parameter ==> tainted
end



