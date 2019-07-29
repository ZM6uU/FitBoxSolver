#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <fstream>

using namespace std;
vector<int> two_power;

void show_array(vector<vector<int>> array)
{
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[0].size(); j++) {
            if (i * j == 0 || i == array.size() - 1 || j == array[0].size() - 1) {
                cout << "- ";
            } else {
                char mark = (array[i][j] == 1) ? '0' : ' ';
                cout << mark << " ";
            }
        }
        cout << endl;
    }
}

int power(int base, int count)
{
    int result = 1;
    for (int i = 0; i < count; i++) {
        result *= base;
    }
    return result;
}

class myObject
{
public:
    myObject(int num)
    {
        m_id = num;
        m_num = num;
        for (int i = 1; i < 10; i++) {
            if (m_num % two_power[i] == two_power[i - 1]) {
                m_num -= two_power[i - 1];
                m_blocks.push_back(1);
            } else {
                m_blocks.push_back(0);
            }
        }
        //cout << "ID = " << m_id << endl;
        if (m_blocks[0] == 1) {
            LT = 1;
            //cout << "LT ON" << endl;
        } else {
            LT = 0;
        }
        if (m_blocks[1] == 1) {
            T = 1;
            //cout << "T ON" << endl;
        } else {
            T = 0;
        }
        if (m_blocks[2] == 1) {
            RT = 1;
            //cout << "RT ON" << endl;
        } else {
            RT = 0;
        }
        if (m_blocks[3] == 1) {
            LM = 1;
            //cout << "LM ON" << endl;
        } else {
            LM = 0;
        }
        if (m_blocks[4] == 1) {
            C = 1;
            //cout << "C ON" << endl;
        } else {
            C = 0;
        }

        if (m_blocks[5] == 1) {
            RM = 1;
            //cout << "RM ON" << endl;
        } else {
            RM = 0;
        }
        if (m_blocks[6] == 1) {
            LB = 1;
            //cout << "LB ON" << endl;
        } else {
            LB = 0;
        }
        if (m_blocks[7] == 1) {
            B = 1;
            //cout << "B ON" << endl;
        } else {
            B = 0;
        }
        if (m_blocks[8] == 1) {
            RB = 1;
            //cout << "RB ON" << endl;
        } else {
            RB = 0;
        }
    }
    int RT = 0;
    int RM = 0;
    int RB = 0;
    int LT = 0;
    int LM = 0;
    int LB = 0;
    int B = 0;
    int T = 0;
    int C = 0;
    int m_num = 0;
    int m_id = 0;
    vector<int> m_blocks;
};

void setTodaysObjects(vector<myObject*>* objects)
{
    int size = 15;
    //int object_ids[size] = {307, 244, 457, 240, 200, 90, 75,464,24,121,120,480,295,208,158};
    //int object_ids[size] = {56,120,408,185,466,188,146,456,464,240,89,201,147,216,484};
    //int object_ids[size] = {90,151,216,186,410,79,147,89,120,56,153,210,201,408,376};
    //int object_ids[size] = {456,316,79,200,153,89,408,409,147,457,210,90,240,120,56};
    //int object_ids[size] = {488,200,409,466,90,480,16,179,464,75,210,456,120,208,244};
    //int object_ids[size] = {153,154,210,147,203,240,152,120,188,16,94,456,480,464,88};
    //int object_ids[size] = {240,376,484,179,152,94,203,312,75,466,89,153,122,120,56};
    //int object_ids[size] = {147,484,120,464,244,312,307,203,88,152,216,314,240,154,56};
    //int object_ids[size] = {210,88,120,89,242,307,376,147,295,409,456,457,201,144,154};
    //int object_ids[size] = {295,75,94,376,201,244,457,153,56,146,216,240,456,307,408};
    //int object_ids[size] = {56,200,480,409,244,147,90,201,210,158,211,24,457,154,75};
    //int object_ids[size] = {409,153,75,456,79,240,488,158,147,408,154,151,314,216,312};
    //int object_ids[size] = {88,147,312,75,152,121,154,480,201,56,185,464,456,184,179};
    //int object_ids[size] = {185,154,184,210,153,240,203,90,188,56,244,200,312,94,295};
    //int object_ids[size] = {244,307,184,408,457,410,240,295,211,480,121,201,316,153,466};
    //int object_ids[size] = {201,307,484,122,295,408,90,146,94,154,312,456,120,184,240};
    //int object_ids[size] = {295,307,216,89,240,242,151,94,201,120,147,122,480,464,211};
    //int object_ids[size] = {314,152,203,144,90,184,295,158,56,147,240,210,242,153,408};
    //int object_ids[size] = {75,154,89,121,146,120,216,484,410,151,480,408,244,184,456};
    //int object_ids[size] = {147,201,79,16,89,200,456,409,240,466,408,90,153,480,186};
    //int object_ids[size] = {122,312,376,216,316,240,457,295,94,154,409,147,75,410,89};
    //int object_ids[size] = {146,120,211,464,94,151,240,24,295,201,90,200,376,484,208};
    //int object_ids[size] = {216,184,316,122,153,90,188,154,456,240,464,208,158,376,410};
    //int object_ids[size] = {120,488,153,94,457,75,480,216,312,456,121,240,89,154,210};
    //int object_ids[size] = {179,203,154,90,201,56,89,184,75,185,147,210,24,312,153};
    //int object_ids[size] = {488,314,89,480,464,147,90,75,152,457,216,240,312,410,210};
    //int object_ids[size] = {408,201,464,152,240,90,147,244,146,456,151,216,488,122,89};
    //int object_ids[size] = {120,188,456,90,376,244,75,408,184,488,89,210,312,480,56};
    //int object_ids[size] = {75,120,151,147,376,89,312,200,484,409,184,242,210,410,316};
    //int object_ids[size] = {120,153,488,200,208,408,144,75,79,89,480,409,464,122,184};
    //int object_ids[size] = {484,480,210,201,408,158,409,56,376,488,154,151,90,144,186};
    //int object_ids[size] = {158,184,152,185,464,120,216,147,211,484,90,154,312,88,89};
    //int object_ids[size] = {376,464,314,408,216,184,456,201,88,210,154,409,90,188,94};
    //int object_ids[size] = {146,314,188,88,464,201,89,184,312,208,210,216,376,151,120};
    //int object_ids[size] = {122,210,456,146,201,90,312,24,179,484,147,216,75,240,316};
    //int object_ids[size] = {295,75,90,146,240,466,200,121,56,410,456,154,89,120,314};
    //int object_ids[size] = {314,153,184,201,457,203,56,154,244,186,147,146,376,408,312};
    int object_ids[size] = {179, 75, 480, 484, 56, 153, 466, 79, 147, 295, 201, 240, 408, 144, 154};
    for (int i = 0; i < size; i++) {
        myObject* p = new myObject(object_ids[i]);
        (*objects).push_back(p);
    }
}

void initialize()
{
    for (int i = 0; i <= 9; i++) {
        two_power.push_back(power(2, i));
    }
    ifstream i_count_file;
    i_count_file.open("count.txt");
    unsigned long long count;
    //unsigned long long time_value = (unsigned long long)time(NULL);
    i_count_file >> count;
    i_count_file.close();
    srand(count /* + time_value * 10000*/);
    int tmp = rand() * rand();
    ofstream count_file;
    count_file.open("count.txt");
    count_file << count + 1;
    count_file.close();
    return;
}

int checkSettable(myObject* object, vector<vector<int>>* array, int col, int row)
{
    if (object->C && (*array)[col][row] == 1) {
        //cout << "center conflict : " << "(" << col << ", " << row << ")" << endl;
        return -1;
    }
    if (object->T) {
        if (col - 1 < 1) {
            //cout << "top out-of-range : " << "(" << col - 1 << ", " << row << ")" << endl;
            return -1;
        }
        if ((*array)[col - 1][row] == 1) {
            //cout << "top conflict : " << "(" << col - 1 << ", " << row << ")" << endl;
            return -1;
        }
    }
    if (object->RT) {
        if (col - 1 < 1 || row + 1 >= 7) {
            //cout << "right-top out-of-range : " << "(" << col - 1 << ", " << row + 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col - 1][row + 1] == 1) {
            //cout << "right-top conflict : " << "(" << col - 1 << ", " << row + 1 << ")" << endl;
            return -1;
        }
    }
    if (object->RM) {
        if (row + 1 >= 7) {
            //cout << "right-middle out-of-range : " << "(" << col << ", " << row + 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col][row + 1] == 1) {
            //cout << "right-middle conflict : " << "(" << col << ", " << row + 1 << ")" << endl;
            return -1;
        }
    }
    if (object->RB) {
        if (col + 1 >= 6 || row + 1 >= 7) {
            //cout << "right-bottom out-of-range : " << "(" << col + 1 << ", " << row + 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col + 1][row + 1] == 1) {
            //cout << "right-bottom conflict : " << "(" << col + 1 << ", " << row + 1 << ")" << endl;
            return -1;
        }
    }
    if (object->LT) {
        if (col - 1 < 1 || row - 1 < 1) {
            //cout << "left-top out-of-range : " << "(" << col - 1 << ", " << row - 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col - 1][row - 1] == 1) {
            //cout << "left-top conflict : " << "(" << col - 1 << ", " << row - 1 << ")" << endl;
            return -1;
        }
    }
    if (object->LM) {
        if (row - 1 < 1) {
            //cout << "left-middle out-of-range : " << "(" << col<< ", " << row - 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col][row - 1] == 1) {
            //cout << "left-middle conflict : " << "(" << col << ", " << row - 1 << ")" << endl;
            return -1;
        }
    }
    if (object->LB) {
        if (col + 1 >= 6 || row - 1 < 1) {
            //cout << "left-bottom out-of-range : " << "(" << col + 1 << ", " << row - 1 << ")" << endl;
            return -1;
        }
        if ((*array)[col + 1][row - 1] == 1) {
            //cout << "left-top conflict : " << "(" << col + 1 << ", " << row - 1 << ")" << endl;
            return -1;
        }
    }
    if (object->B) {
        if (col + 1 >= 6) {
            //cout << "bottom out-of-range : " << "(" << col + 1 << ", " << row << ")" << endl;
            return -1;
        }
        if ((*array)[col + 1][row] == 1) {
            //cout << "bottom conflict : " << "(" << col + 1 << ", " << row << ")" << endl;
            return -1;
        }
    }
    return 1;
}

void print_score(vector<vector<int>>* array)
{
    int score = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6; j++) {
            if ((*array)[i][j] == 1) {
                score++;
            }
        }
    }
    cout << "score = " << score << endl;
}


void setObject(myObject* object, vector<vector<int>>* array, int col, int row)
{
    //if (checkSettable(object, array, col, row) == -1) {
    //    cout << "whywhy" << endl;
    //    return;
    //}
    cout << "set object : " << object->m_id << "(id), " << col << "(col), " << row << "(row)" << endl;
    if (object->C) {
        if ((*array)[col][row] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col][row] = 1;
    }
    if (object->T) {
        if ((*array)[col - 1][row] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col - 1][row] = 1;
    }
    if (object->RT) {
        if ((*array)[col - 1][row + 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col - 1][row + 1] = 1;
    }
    if (object->RM) {
        if ((*array)[col][row + 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col][row + 1] = 1;
    }
    if (object->RB) {
        if ((*array)[col + 1][row + 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col + 1][row + 1] = 1;
    }
    if (object->LT) {
        if ((*array)[col - 1][row - 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col - 1][row - 1] = 1;
    }
    if (object->LM) {
        if ((*array)[col][row - 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col][row - 1] = 1;
    }
    if (object->LB) {
        if ((*array)[col + 1][row - 1] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col + 1][row - 1] = 1;
    }
    if (object->B) {
        if ((*array)[col + 1][row] == 1) {
            cout << "Why!" << endl;
        }
        (*array)[col + 1][row] = 1;
    }
}

void remove_line(vector<vector<int>>* array)
{
    //koko
    vector<int> cols(5, 0);
    vector<int> rows(6, 0);
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6; j++) {
            cols[i - 1] += (*array)[i][j];
            rows[j - 1] += (*array)[i][j];
        }
    }

    for (int i = 1; i <= 5; i++) {
        if (cols[i - 1] == 6) {
            for (int j = 1; j <= 6; j++) {
                (*array)[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= 6; i++) {
        if (rows[i - 1] == 5) {
            for (int j = 1; j <= 5; j++) {
                (*array)[j][i] = 0;
            }
        }
    }
}

int main()
{
    initialize();
    vector<vector<int>> array;
    vector<myObject*> objects;
    setTodaysObjects(&objects);
    int col_num = 7;
    int row_num = 8;
    for (int i = 0; i < col_num; i++) {
        vector<int> row;
        for (int j = 0; j < row_num; j++) {
            if (i * j == 0 || i == 6 || j == 7) {
                row.push_back(1);
            } else {
                row.push_back(0);
            }
        }
        array.push_back(row);
    }
    cout << "initial state" << endl;
    show_array(array);
    cout << "--------------" << endl;

    bool loop = true;
    while (1) {
        //possible move
        vector<int> possible_object_nums;
        vector<int> possible_col_nums;
        vector<int> possible_row_nums;

        for (int i = 0; i < objects.size(); i++) {
            for (int j = 1; j < col_num - 1; j++) {
                for (int k = 1; k < row_num - 1; k++) {
                    //cout << "checking (" << j << ", " << k << ")" << endl;
                    int check = checkSettable(objects[i], &array, j, k);
                    if (check == 1) {
                        possible_object_nums.push_back(i);
                        possible_col_nums.push_back(j);
                        possible_row_nums.push_back(k);
                    }
                }
            }
        }

        //no possible move
        if (possible_object_nums.size() == 0) {
            cout << "stopped!\nunable to continue!" << endl;
            break;
        }

        //choose random move
        int rand_value = rand() % possible_object_nums.size();
        int selected_object_num = possible_object_nums[rand_value];
        int selected_col_num = possible_col_nums[rand_value];
        int selected_row_num = possible_row_nums[rand_value];

        setObject(objects[selected_object_num], &array, selected_col_num, selected_row_num);

        objects.erase(objects.begin() + selected_object_num, objects.begin() + selected_object_num + 1);

        //for (int i = 0; i < objects.size(); i++) {
        //    cout << "now objects[i]->id = " << objects[i]->m_id << endl;
        //}

        //remove line
        remove_line(&array);

        show_array(array);
        cout << "--------------" << endl;

        if (objects.size() == 0) {
            print_score(&array);
            loop = false;
            break;
        }
    }

    objects.clear();
}
