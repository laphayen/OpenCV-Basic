# OpenCV-Basic

OpenCV(Open Source Computer Vision Library)는 컴퓨터 비전 라이브러리로 오픈소스이다. 
C/C++기반으로 현재 여러 운영체제에서 다양한 플랫폼을 제공하고 있다.
라이브러리는 각각의 모듈로 구성되어 있으며 확장자는 \*.lib, \*.dll 등 을 가진다.
[공식 문서 사이트](https://docs.opencv.org/)를 참고하면 다양한 정보를 얻을 수 있다.(단, 해당 버전을 참고해야 한다)

## 1. [OpenCV 설치 방법 및 프로젝트 생성](https://codeomni.tistory.com/764)
### OpenCV 설치
* [다운로드](https://opencv.org/releases/) 에서 제공하는 OpenCV를 다운받아서 Visual Studio로 프로젝트를 생성한다.
* 먼저, 버전에 맞는 곳에서 사용하고 있는 운영체제를 선택한다.
* 파일을 다운받은 뒤에 라이브러리를 설치할 폴더를 지정한다.
* 필자는 편한 관리를 위해 C:\ 에 설치를 하였다.
* 다운 받은 OpenCV를 사용하기 위해 헤더 파일의 위치를 시스템 환경 변수에 넣는다.
### OpenCV 프로젝트 만들기
* 비주얼 스튜디오에서 새 프로젝트 만들기를 클릭한다.
* 언어 설정을 C++로 설정한 후 Window 데스크톱 마법사를 클릭한다.
* 프로젝트 이름을 지정한 후 솔루션용 디렉터리 만들기(D)를 클릭하여 생성한다.
* 추가 옵션에서 빈 프로젝트(E)와 SDL(Security Development Lifecycle) 검사(C)를 클릭하여 확인을 누른다.
* 코드를 작성한 후에 활성 솔루션 플랫폼을 x64로 설정하여 실행한다.(Debug와 Release 동일)

## 2. [openCV 영상을 화면에 출력하기](https://codeomni.tistory.com/798)
### 화면 출력하기
* #include로 프로그램 실행에 필요한 OpenCV와 입출력을 담당하는 iostrream 헤더 파일을 불러온다.
<pre><code>#include "iostream"
</code></pre>
* using namespace로 코드 전체에서 cv::와 std::을 생략할 수 있다.(간결함)
<pre><code>using namespace cv;
using namespace std;
</code></pre>
* Mat 클래스로 영상을 담을 변수를 선언한다.
<pre><code>Mat img;
</code></pre>
* imread() 함수로 lenna.png 파일을 불러온다.
<pre><code>img = imread("lenna.png");
</code></pre>
* empty() 함수로 예외처리.
<pre><code>if (img.empty()) { }
</code></pre>
* namedWindow() 함수로 영상을 표시할 창을 생성한 후 이름을 붙인다.
<pre><code>namedWindow("image");
</code></pre>
* imshow() 함수로 생성한 창에 불러온 파일을 출력하고, " " 안에 파일의 이름을 지정한다.
<pre><code>imshow("image", img);
</code></pre>
* waitkey() 키보드의 키를 입력 시 영상 종료한다. 
<pre><code>waitKey();
</code></pre>


## 3. [기본 클래스]()
### 3-1. Point_ 클래스
* 2차원 x, y 축의 좌표 개념이다. 
* 멤버 변수로 (x, y)를 사용한다.
* x와 y를 나눠서 지정 가능하다.
<pre><code>pt1.x = 8; pt1.y = 8;
</code></pre>
* (x, y)로 지정
<pre><code>pt2(6, 17);
</code></pre>

### 3-2. Size_ 클래스
* 영상에서 크기를 지정하는 클래스이다.
* 멤버 변수로 width와 height를 사용한다.
* area() - 영상의 면적
<pre><code>int area1 = sz1.area();
</code></pre>

### 3-3. Rect_ 클래스
* 영상의 2차원 정보를 표시


## 4. 카메라 처리하기
### 4-1 카메라 입력 처리
* VideoCapture 클래스 사용 -> VideoCapture 객체 생성
* VideoCapture::Open() - 멤버 함수로 카메라 장치를 지정해서 연다.(디폴트 0 - 기본 카메라)
<pre><code>VideoCapture cap(0);
</code></pre>
* VideoCapture::isOpened() - 멤버 함수로 상태 확인(fasle - 사용X)
<pre><code>if (!cap.isOpened()) {
</code></pre>
* Mat 클래스 객체에 저장 후 imshow()함수로 영상을 출력한다.
<pre><code>imshow("frame", frame);
</code></pre>

### 4-2. 동영상 입력 처리하기
* VideoCapture 클래스 사용 -> VideoCapture 객체 생성
<pre><code>VideoCapture cap("video name.avi");
</code></pre>
* CAP_PROP_FRAME_COUNT - 영상의 전체 프레임 수
<pre><code>cout << "Frame count" << cvRound(cap.get(CAP_PROP_FRAME_COUNT)) << endl;
</code></pre>
* CAP_PROP_FRAME_WIDTH - 영상 프레임의 가로 크기
<pre><code>cout << "Frame width " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
</code></pre>
* CAP_PROP_FRAME_HEIGHT - 영상 프레임의 높이 크기
<pre><code>cout << "Frame height " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << end;
</code></pre>
* CAP_PROP_FPS - 영상의 초당 프레임 수
<pre><code>cout << "Frame height " << cvRound(cap.get(CAP_PROP_FPS)) << end;
</code></pre>
* 카메라 입력 처리와 같게 Mat 클래스 객체에 저장 후 imshow()함수로 영상을 출력한다.
<pre><code>imshow("frame", frame);
</code></pre>

### 4-3. 동영상 출력 처리하기
* VideoWriter 클래스 사용 -> VideoWriter 객체 생성
<pre><code>VideoWriter outputBideo("output.avi", fourcc, fps, Size(w,h));
</code></pre>
* fourcc - 영상 파일의 저장할 코덱 지정
<pre><code>int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
</code></pre>
  * fourcc('D', 'I', 'V', 'X') - DivX MPEG-4 코덱
  * fourcc('X', '2', '6', '4') - H.264/AVC 코덱
  * fourcc('A', 'V', 'C', '1') - Advanced Video 코덱
* outputVideo() 함수로 저장할 파일의 이름과, 코덱, fps, 크기를 지정한다.
<pre><code>outputVideo << frame;
</code></pre>

## 5. 이벤트 처리
### 5-1. 키보드 이벤트 처리
* waitKey() - OpenCV의 키보드 입력 함수
<pre><code>int waitKey(int delay = 0);
</code></pre>
* delay - 밀리초 동안 대기
* 지정된 입력 키와 지정된 시간동안 키의 입력이 없을 경우 -1 반환한다.
* 키의 입력을 지정하는 경우는 아스키 코드표를 참조한다.

### 5-2. 마우스 이벤트 처리
* setMouseCallbck() 함수 사용한다.
<pre><code>void setMouseCallback(const String& winname, MouseCallback onMouse, void* userdata = 0;
</code></pre>
* MouseCallbak 함수의 구성
<pre><code>typedef void (*MouseCallback)(int event, int x, int y, int flags, void* userdata);
</code></pre>
* MouseEventTypes 열거형 상수 - 마우스 버튼 조작 상태( 어느 버튼이 조작되고 있는지)
* MouseEventFlags 열거형 상수 - 버튼 눌려있는 상태

### 5-3. 트랙바 이벤트

## 기타1 - 반전 영상
* 반전 변수를 생성 후 ~연산자를 사용한다.
* inversed = ~frame;
<pre><code>inversed = ~frame;
</code></pre>
* imshow("inversed", inversed);
<pre><code>imshow("inversed", inversed);
</code></pre>

