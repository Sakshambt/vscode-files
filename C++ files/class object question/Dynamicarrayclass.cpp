class dynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    dynamicArray()
    {
        data = new int[5];
        capacity = 5;
        nextIndex = 0;
    }

    dynamicArray(dynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void operator=(dynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    int get(int i) const
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};