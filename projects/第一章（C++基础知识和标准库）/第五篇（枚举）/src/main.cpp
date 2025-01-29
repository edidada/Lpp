import std;  // 导入标准库

using namespace std;  // 使用标准命名空间，避免每次调用标准库函数时都要写 std::

// 定义一个枚举类 PieceType，表示棋子的类型
enum class PieceType
{
    King = 1,  // 王，枚举值为1
    Queen,     // 后，枚举值为2（自动递增）
    Rook = 10, // 车，枚举值为10
    Pawn       // 兵，枚举值为11（自动递增）
};

int main()
{
    /**
    * 代码被分成了三个独立的块，每个块都展示了不同的枚举使用方式。
    * 每个块中的变量 piece 都是独立的，不会相互影响。
     */
    {
        // 创建一个 PieceType 类型的变量 piece，并初始化为 PieceType::King
        PieceType piece{ PieceType::King };

        // 使用 to_underlying 函数将枚举值转换为其底层类型（通常是 int）
        auto underlyingValue{ to_underlying(piece) };
        // underlyingValue 现在等于 1，因为 PieceType::King 的底层值是1
    }

    {
        // 使用 using enum 指令，使得可以直接使用 PieceType 的枚举值而不需要写 PieceType::
        using enum PieceType;
        // 创建一个 PieceType 类型的变量 piece，并初始化为 King
        PieceType piece{ King };
        // 这里 piece 的值是 PieceType::King
    }

    {
        // 使用 using 指令，只引入 PieceType::King，使得可以直接使用 King 而不需要写 PieceType::
        using PieceType::King;
        // 创建一个 PieceType 类型的变量 piece，并初始化为 King
        PieceType piece{ King };
        // 将 piece 的值改为 PieceType::Queen
        piece = PieceType::Queen;
        // 现在 piece 的值是 PieceType::Queen
    }
}