# BitVector Set

A lightweight and efficient Bit Vector data structure for set operations, designed for static program analysis tasks such as points-to analysis, liveness analysis, and dataflow frameworks. This implementation supports core set operations (union, intersection, difference, subset checking) using low-level bit manipulation for high performance and compact storage.


## TODO
- List of item names in set as vector of strings
- each item in set is assigned a bit in the order entered in set
- set itself is an array of 32-bit values
- array bit can be indexed by \
  `bitvector[ floor( (item_num - 1) / 32 ) ] << ( (item_num - 1) % 32);`\
-->`bitvector[ floor( (item_num - 1) >> 5 ) ] << ( (item_num - 1) & 0x1F);`
- implement union and intersection between two bitvector sets


## Features
- Fixed-size and dynamically resizable bit vectors
- Fast set union, intersection, difference, and equality checks
- Efficient iteration over set elements
- Optional sparse representation fallback for very large domains
- Clear API tailored for compiler dataflow and alias analysis

## Use Cases
- Points-to set representation in alias analysis
- Live variable analysis
- Reaching definitions
- General-purpose static analysis tooling

## Planned
- Integration with Datalog frontends or IR parsers
- Support for serialization/deserialization
- Benchmarks comparing sparse and dense bit vector variants

## License
MIT
