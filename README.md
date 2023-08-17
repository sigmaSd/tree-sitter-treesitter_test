# tree-sitter-treesitter_test

## Developement

```
npm install
npm generate
npm test
npm test:update # to update tests when developpping
npx tree-sitter parse examples/* --quiet --stat
```

## Use with helix

Add this to helix languages.toml
```toml
[[grammar]]
name = "treesitter_test"
source = {git = "https://github.com/sigmaSd/tree-sitter-treesitter_test", rev = "ea2c024c805cd962ad205f23297616e7b87e2419"}

[[language]]
name = "treesitter_test"
scope = "source.ts_test"
file-types = ["ts_test"]
roots = []
```

```
hx -g fetch && hx -g build
mkdir -p ~/.config/helix/runtime/queries/treesitter_test
ln -s ~/.config/helix/runtime/grammars/sources/treesitter_test/queries/highlights.scm  ~/.config/helix/runtime/queries/treesitter_test/highlights.scm
hx test.ts_test # should work now
```

![image](https://github.com/sigmaSd/tree-sitter-treesitter_test/assets/22427111/b493992f-15ae-430a-8173-81e42968e310)
