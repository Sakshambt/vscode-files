class polynomial
{
    int *degcoff;
    int capacity;

public:
    polynomial()
    {
        degcoff = new int[5]{0};
        capacity = 5;
    }

    polynomial(polynomial const &p)
    {
        this->degcoff = new int[p.capacity]{0};
        for (int i = 0; i < p.capacity; i++)
        {
            this->degcoff[i] = p.degcoff[i];
        }
        this->capacity = p.capacity;
    }

    polynomial operator=(polynomial const &p)
    {
        this->degcoff = new int[p.capacity]{0};
        for (int i = 0; i < p.capacity; i++)
        {
            this->degcoff[i] = p.degcoff[i];
        }
        this->capacity = p.capacity;
    }

    void add(int coef, int deg)
    {
        if (deg >= capacity)
        {
            int *newdegcoff = new int[deg + 1]{0};
            for (int i = 0; i < capacity; i++)
            {
                newdegcoff[i] = degcoff[i];
            }
            delete[] degcoff;
            degcoff = newdegcoff;
            capacity = deg + 1;
        }
        degcoff[deg] = coef;
    }

    polynomial operator+(polynomial const &p)
    {
        int cap = max(capacity, p.capacity);
        int *newdegcoff = new int[cap]{0};
        int i;
        for (i = 0; i < min(capacity, p.capacity); i++)
        {
            newdegcoff[i] = degcoff[i] + p.degcoff[i];
        }
        for (; i < capacity; i++)
        {
            newdegcoff[i] = degcoff[i];
        }
        for (; i < p.capacity; i++)
        {
            newdegcoff[i] = p.degcoff[i];
        }
        return 
    }

    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degcoff[i] != 0)
            {
                cout << degcoff[i] << ":" << i << " ";
            }
        }
        cout << endl;
    }
};