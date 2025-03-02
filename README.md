Lodash Native
=======

Under development
----

[Todos](TODOS.md)

About
------

Lodash Native is a C port of the Lodash JavaScript utility library. The original version was written in JavaScript, but this version is meant for portability.

Usage
----

Expected usage example

```js
const _ = require("lodash-native");

_.chunk(['a', 'b', 'c', 'd'], 2);

// => [['a', 'b'], ['c', 'd']]
```

Project structure
----

```
├── binding.gyp                         Used by gyp to compile the C code
├── build                               The intermediary and final build products
│   └── < contents not shown here >
├── lib                                 The Node-API code that accesses the C/C++ binary
│   └── lodash.h
├── node_modules                        Node modules required by your project
│   └── < contents not shown here >
├── package.json                        npm description of your module
├── package-lock.json                   Used by npm to insure deployment consistency
├── src                                 The C/C++ code
│   └── lodash_addon.c
└── test                                Test code
    └── test_bindings.spec.js
```
