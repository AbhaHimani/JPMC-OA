string isItPossible(int a, int b, int c, int d)
{
    deque<pair<int, int>> pairs;
    pairs.push_back(make_pair(a, b));
    while (!pairs.empty())
    {
        pair<int, int> pair = pairs.front();
        pairs.pop_front();
        int key = pair.first;
        int value = pair.second;
        if (key == a && value == b)
        {
            return "YES";
        }
        int sum = key + value;
        if (sum <= c)
        {
            pairs.push_back(make_pair(sum, value));
        }
        if (sum <= d)
        {
            pairs.push_back(make_pair(key, sum));
        }
    }
    return "NO";
}

// 2nd-

bool recurse(int sx, int sy, int tx, int ty)
{
    if (tx < sx)
    {
        return false;
    }
    else if (tx == sx)
    {
        return ((ty - sy) % sx) == 0;
    }
    else
    {
        return recurse(sy, sx, ty % tx, tx);
    }
}

bool reachingPoints(int sx, int sy, int tx, int ty)
{
    if (tx < ty)
    {
        return recurse(sx, sy, tx, ty);
    }
    else
    {
        return recurse(sy, sx, ty, tx);
    }
}

static LinkedList<Pair<Integer, Integer>> pairs = new LinkedList<Pair<Integer, Integer>>();

public
static String isItPossible(Integer a, Integer b, Integer c, Integer d)
{
    pairs.addLast(new Pair<Integer, Integer>(a, b));
    while (!pairs.isEmpty())
    {
        Pair<Integer, Integer> pair = pairs.poll();
        Integer key = pair.getKey();
        Integer value = pair.getValue();
        if (key.equals(a) &&
            value.equals(b))
        {
            return "YES";
        }
        int sum = key + value;
        if (sum <= c)
        {
            pairs.addLast(new Pair<Integer, Integer>(sum, value));
        }
        if (sum <= d)
        {
            pairs.addLast(new Pair<Integer, Integer>(key, sum));
        }
    }

    return "NO";
}