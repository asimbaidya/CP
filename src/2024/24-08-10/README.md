# Notes

## learned python convention

Use `defaultdict` to reduce an extra if block

```python
from collections import defaultdict
mp = ans = defaultdict(list)


## just append value no need to check if key exist!
mp['some_key'].append('a new value frome `some_key`')
```
