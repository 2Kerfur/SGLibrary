#define MAX_TEXT 20

namespace SGL {
    class TextLabel {
    public:
        int32_t Visible(bool show);
        int32_t Create(char *Text, int32_t x_pos, int32_t y_pos);
        int32_t Delete();
    private:
        bool isVisible = true;
        char *Label_text;
        int32_t Label_x_pos;
        int32_t Label_y_pos;

    };
}