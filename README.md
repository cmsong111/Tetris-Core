# 테트리스 코어 모듈

C++로 작성된 테트리스 코어 모듈입니다.

## 모듈 설명

### Block.h, Block.cpp

블록을 나타내는 클래스입니다.

### Board.h, Board.cpp

게임 보드를 나타내는 클래스입니다.

### TetrisGame.h, TetrisGame.cpp

테트리스 게임을 싱글턴 및 필요한 기능만 노출시킨 클래스입니다.

## 사용 방법

TetrisGame 클래스를 이용해 테트리스 게임을 진행할 수 있습니다.

_개발 편의를 위해 싱글턴 패턴을 적용하였습니다._

- `void initGame();` : 게임을 초기화하는 함수
- `void moveBlock(int direction = 0);` : 블록을 이동시키는 함수 (아래 = 0, 왼쪽 = 1, 오른쪽 = 2, 위 = 3)
- `void rotateBlock();` : 블록을 회전시키는 함수
- `int *getBoard();` : 게임 보드를 반환하는 함수
- `Block getNextBlock();` : 다음 블록을 반환하는 함수
- `bool isGameOver();` : 게임이 끝났는지 확인하는 함수

### 주의 사항

블럭이 자동으로 내려가는 기능은 구현되어 있지 않습니다.

따라서 타이머나 스레드를 이용해 블럭을 자동으로 내려가게 해야 합니다.

## 사용 예시

- [Tetris-Game Based on Terminal](./example)
- [Tetris-Game Based on MFC](https://github.com/JiMinL03/TETRIS-GAME)
