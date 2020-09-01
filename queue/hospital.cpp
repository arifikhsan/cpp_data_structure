#include <iostream>
#include <queue>
#include <string>

using namespace std;

/**
 * Silahkan buat aplikasi dengan C++ dengan menngunakan proses antrean,
 * dan dengan metode input data hapus data,
 * serta ada pemberitahun antrean jika sudah penuh,
 * antrean penuh maksimal sesuai nim terakhir,
 * screenshot program dan codenya lalu simpan di pdf kirim melalui WA
 * maksimal tanngal 02/09/2020
 * */

bool is_queue_full(queue<int> hospital_queue, int max_queue);

int main()
{
  const unsigned int initial_queue = 1;
  unsigned int current_queue = 0;
  const unsigned int max_queue = 32; // insert student ID
  queue<int> hospital_queue;
  bool allow_patient_queue = true;
  int unsigned operation_queue;

  while (allow_patient_queue)
  {
  initial_loop:

    cout << "======================================" << endl;
    cout << "   Antrian Pengunjung Rumah Sakit X   " << endl;
    cout << "--------------------------------------" << endl;

    cout << "Maksimal antrian : " << max_queue << endl;
    cout << "Antrian saat ini : " << hospital_queue.size() << endl;
    string is_queue_full_message = (is_queue_full(hospital_queue, max_queue)) ? "Sudah" : "Belum";
    cout << "Antrian penuh?   : " << is_queue_full_message << endl;

    cout << "--------------------------------------" << endl;
    cout << "Pilih Aksi dengan memasukkan salah satu angka." << endl;
    cout << endl;

    if (!is_queue_full(hospital_queue, max_queue))
    {
      cout << "1. Tambah pasien ke antrian belakang (1)" << endl;
    }

    if (hospital_queue.size() != 0)
    {
      cout << "2. Kurangi pasien dari antrian depan (2)" << endl;
    }

    cout << "3. Tutup antrian dan keluar aplikasi (3)" << endl;
    cout << "--------------------------------------" << endl;
    cin >> operation_queue;

    if (is_queue_full(hospital_queue, max_queue) && operation_queue == 1)
    {
      cout << "Tidak bisa menambah antrian lagi." << endl;
      goto initial_loop;
    }

    if (hospital_queue.size() == 0 && operation_queue == 2)
    {
      cout << "Tidak bisa mengurangi antrian." << endl;
      goto initial_loop;
    }

    if (operation_queue != 1 && operation_queue != 2 && operation_queue != 3)
    {
      cout << "Pilihan tidak valid." << endl;
      goto initial_loop;
    }

    switch (operation_queue)
    {
    case 1:
      hospital_queue.push(current_queue++);
      break;

    case 2:
      hospital_queue.pop();
      break;

    case 3:
      allow_patient_queue = false;

    default:
      allow_patient_queue = false;
      break;
    }

    cout << "======================================" << endl;
  }
}

bool is_queue_full(queue<int> hospital_queue, int max_queue)
{
  return hospital_queue.size() == max_queue;
}
