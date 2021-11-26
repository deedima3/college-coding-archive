public class Barang {
    private String kodeBarang;
    private String namaBarang;

    public Barang(String kodeBarang, String namaBarang){
        this.kodeBarang = kodeBarang;
        this.namaBarang = namaBarang;
    }

    public String getkodeBarang(){
        return kodeBarang;
    }

    public void setkodeBarang(String kodeBarang){
        this.kodeBarang = kodeBarang;
    }

    public String getnamaBarang(){
        return namaBarang;
    }

    public void setnamaBarang(String namaBarang){
        this.namaBarang = namaBarang;
    }
}

class Handphone extends Barang {
    private String merek;
    private String ram;
    private String processor;

    public Handphone(String kodeBarang, String namaBarang, String merek, String ram, String processor){
        super(kodeBarang, namaBarang);
        this.ram = ram;
        this.merek = merek;
        this.processor = processor;
    }
    
    public void showInfo(){
        System.out.printf("%s, %s",kodeBarang, namaBarang);
        System.out.printf("%s, %s, %s",merek, ram, processor);
    }
}

class DaftarBarang {
    private Barang[] daftar;
    private int count = 0;

    public void add(Barang barang){
        this.daftar[this.count] = barang;
        this.count++;
    }

    public void pop(Barang barang){
        this.daftar[this.count] = barang;
        this.count++;
    }

    public void show(){
        for (int i = 0; i <= count; i++) {
            System.out.println(daftar[i]);
          }
    }


}