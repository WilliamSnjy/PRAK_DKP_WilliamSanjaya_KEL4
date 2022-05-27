#pragma once
#define MAX 25
ref class harga {
	private:
		static array <int>^ Harga = gcnew array <int>(MAX);
		static int i = 0;
		static int temp;
	public:
		void reset() {
			i = 0;
		}
		void sHarga(int a, int b, int c, int d, int e, int f, int g, int h, int j, int k,int l,int m,int n,int o,int p,int q,int r,int s,int t,int u,int v,int w,int x,int y,int z) {
			Harga[0] = a;
			Harga[1] = b;
			Harga[2] = c;
			Harga[3] = d;
			Harga[4] = e;
			Harga[5] = f;
			Harga[6] = g;
			Harga[7] = h;
			Harga[8] = j;
			Harga[9] = k;
			Harga[10] = l;
			Harga[11] = m;
			Harga[12] = n;
			Harga[13] = o;
			Harga[14] = p;
			Harga[15] = q;
			Harga[16] = r;
			Harga[17] = s;
			Harga[18] = t;
			Harga[19] = u;
			Harga[20] = v;
			Harga[21] = w;
			Harga[22] = x;
			Harga[23] = y;
			Harga[24] = z;
		}
		int getHarga() {
			temp = Harga[i];
			i++;
			return temp;
		}
	};